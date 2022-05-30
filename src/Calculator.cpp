#include "Calculator.h"

std::string Calculator::infixToPrefix(std::string infixExpression) {

}

std::string Calculator::reverse(std::string expression) {
    std::string reversedString = "";
    for (int i = expression.length() - 1; i >= 0; i--) {
        if (expression[i] == '(') {
            reversedString += ')';
        } else if (expression[i] == ')') {
            reversedString += '(';
        } else {
            reversedString += expression[i];
        }
    }
    return reversedString;
}
