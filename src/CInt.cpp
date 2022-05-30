#include "CInt.h"

void CInt::run(){
    std::string command = "";
    while(m_bRunning){
        std::cout << "CInt>";
        getline(std::cin,command);
        parser.tokenize(command);
    }
}
