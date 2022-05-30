#include "Parser.h"

void Parser::tokenize(std::string command) {
    if (isCalculation(command)) {
        calculation = true;
    } else {
        std::string spaceDelimiter = " ";
        size_t pos;
        while ((pos = command.find(spaceDelimiter)) != std::string::npos) {
            tokens.push_back(command.substr(0, pos));
            command.erase(0, pos + spaceDelimiter.length());
        }
        tokens.push_back(command);
    }
}

void Parser::operate() {
    if (calculation) {
        double result = 0;
    }
}
