#include "Random.h" // defines Random::mt, Random::get(), and Random::generate()
#include <limits>
#include <iostream>

void ignoreLine();
int getInteger(int guessCount);
void game(int guesses);
void playAgain();

constexpr int guesses{ 7 }; // the user has this many guesses

int main()
{

    game(guesses);

	return 0;
}

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getInteger(int guessCount)
{
    while (true) // Loop until user enters a valid input
    {
        std::cout << "Guess #" << guessCount << ": ";
        int x{};
        std::cin >> x;

        // Check for failed extraction
        if (!std::cin) // if the previous extraction failed
        {
            if (std::cin.eof()) // if the stream was closed
            {
                exit(0); // shut down the program now
            }

            // let's handle the failure
            std::cin.clear(); // put us back in 'normal' operation mode
            ignoreLine();     // and remove the bad input

            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
        else
        {
            ignoreLine(); // remove any extraneous input
            if (x <= 0 || x >= 100) {
                std::cout << "Oops, that input is invalid. Number must be => 1 or =< 100. Please try again.\n";
            }
            else
                return x;
        }
    }
}

void playAgain()
{
    while (true) // Loop until user enters a valid input
    {
        std::cout << "Would you like to play again (y/n)? ";
        char response{};
        std::cin >> response;

        if (!std::cin) // if the previous extraction failed
        {
            if (std::cin.eof()) // if the stream was closed
            {
                exit(0); // shut down the program now
            }

            // let's handle the failure
            std::cin.clear(); // put us back in 'normal' operation mode
        }

        ignoreLine(); // remove any extraneous input

        // Check whether the user entered meaningful input
        switch (response)
        {
        case 'y':
        case 'Y':
            game(guesses);
        case 'n':
        case 'N':
            std::cout << "Thank you for playing.\n";
            exit(0);
        default: // otherwise tell the user what went wrong
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
    } // and try again
}

void game(int guessNum) {

    std::uniform_int_distribution rand1to100{ 1, 100 }; // for C++14, use std::uniform_int_distribution<> die6{ 1, 6 };

    int numberToGuess{ rand1to100(Random::mt) };
    std::cout << "Hint: " << numberToGuess << '\n';

    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";

    for (int noOfTries{ 1 }; noOfTries <= guessNum; ++noOfTries) {

        int guess{ getInteger(noOfTries) };

        if (guess > numberToGuess) {
            std::cout << "Your guess is too high.\n";
        }
        else if (guess < numberToGuess) {
            std::cout << "Your guess is too low.\n";
        }
        else {
            std::cout << "Correct! You win!\n";
            playAgain();
        }

    }

    std::cout << "Sorry, you lose. The correct number was " << numberToGuess << ".\n";
    playAgain();
}
