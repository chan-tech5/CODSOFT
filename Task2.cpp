#include <iostream>

int main() {
    char operation;
    double num1, num2, result;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Choose operation (+, -, *, /): ";
    std::cin >> operation;

    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "Error! Divisible by zero is not allowed." << std::endl;
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            std::cout << "Error! Invalid operation." << std::endl;
            return 1;
    }

    std::cout << "Result is: " << result << std::endl;

    return 0;
}
