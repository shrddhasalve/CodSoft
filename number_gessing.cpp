#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    int guess;
    int attempts = 0;

       std::cout << "\n\t\t\tWelcome to GuessTheNumber game!\n";
       std::cout << "\tYou have to guess a number between 1 and 100.  Try to guess it.   Good Luck!\n\n";


    do {
        // Get player's guess
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        // Increment the number of attempts
        attempts++;

        // Check if the guess is correct
        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n\n";
        } else {
            std::cout << "Too low! Try again.\n\n";
        }

    } while (guess != secretNumber);

    return 0;
}