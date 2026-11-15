#include<iostream>

namespace Add {
    int calc(int a, int b) {return a + b;}
}
namespace Sub {
    int calc(int a, int b) {return a - b;}
}
namespace Mul {
    int calc(int a, int b) {return a * b;}
}
namespace Div {
    int calc(int a, int b) {return a / b;}
}

int main() {
    int a = 6, b = 9;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Addition = " << Add::calc(a, b) << std::endl;
    std::cout << "Subtraction = " << Sub::calc(a, b) << std::endl;
    std::cout << "Multiplication = " << Mul::calc(a, b) << std::endl;
    std::cout << "Division = " << Div::calc(a, b) << std::endl;
}