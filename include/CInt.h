#ifndef __CINT__
#define __CINT__
#include "lib.h"
#include "Parser.h"

// Handle the interactive commandline
class CInt {
  private:
    bool m_bRunning;
    Parser parser;
  public:
    CInt() { m_bRunning = true; }
    void run();
};

#endif // !__CINT__
