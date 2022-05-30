#ifndef __PARSER__
#define __PARSER__
#include "lib.h"
#include "Util.h"

class Parser{
private:
    std::vector<std::string> tokens;
    bool calculation;
public:
    Parser(){
        calculation = false;
    }
    void tokenize(std::string command);
    void operate();
};

#endif // !__PARSER__
