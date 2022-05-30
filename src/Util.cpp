#include "Util.h"

bool isCalculation(std::string command){
    for(int i =0; i< command.length();i++){
        if (command[i]>=48 && command[i] <= 57){
            continue;
        }else if(command[i] == '+' || command[i] == '-' || command[i] =='*' ||command[i] =='/' || command[i]=='%' || command[i] == '^'){
            continue;
        }
        return false;
    }
    return true;
}

int parseInt(std::string number){
    return std::stoll(number);
}
