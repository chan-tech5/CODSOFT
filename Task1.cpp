#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(nullptr));

    int secretNumber = rand() % 100 + 1;
    
    int guess;
    int tries = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "Try to guess the number between 1 and 100." << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        tries++;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << tries << " tries." << std::endl;
        }

    } while (guess != secretNumber);

    return 0;
}