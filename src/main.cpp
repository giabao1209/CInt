#include "CInt.h"
#include "Calculator.h"

int main (int argc, char *argv[])
{
    // CInt cli;
    // cli.run();
    Calculator calc;
    std::cout << calc.reverse("A+B*C");
    return 0;
}
