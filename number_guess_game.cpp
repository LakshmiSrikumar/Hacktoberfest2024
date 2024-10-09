#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(0)); // Seed the random number generator
    int secretNumber = std::rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;
    const int maxAttempts = 3; // You can change this to set the difficulty level

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100. Can you guess it?" << std::endl;

    while (attempts < maxAttempts) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
            break;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }
    }

    if (attempts == maxAttempts) {
        std::cout << "Sorry, you've used all your attempts. The number was " << secretNumber << "." << std::endl;
    }

    return 0;
}
