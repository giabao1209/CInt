#ifndef __CALCULATOR__
#define __CALCULATOR__
#include "lib.h"

class Calculator{

public:
    std::string infixToPrefix(std::string infixExpression);
    std::string reverse(std::string expression);
    
};

#endif // !__CALCULATOR__
