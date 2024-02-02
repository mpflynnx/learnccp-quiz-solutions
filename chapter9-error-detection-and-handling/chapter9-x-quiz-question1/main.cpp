#include "Random.h" // defines Random::mt, Random::get(), and Random::generate()
#include <limits>
#include <iostream>

void ignoreLine();
int getInteger(int guessCount);
char getChar();

int main()
{


	// Create a reusable random number generator that generates uniform numbers between 1 and 6
	std::uniform_int_distribution rand1to100{ 1, 100 }; // for C++14, use std::uniform_int_distribution<> die6{ 1, 6 };

	// We can also directly access Random::mt
	int numberToGuess{ rand1to100(Random::mt) };
    std::cout << "Hint: " << numberToGuess << '\n';

	std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
    
    int noOfTries{ 1 };

    while (noOfTries < 8) {

        int guess{ getInteger(noOfTries) };

        if (guess > numberToGuess) {
            std::cout << "Your guess is too high.\n";
        }
        else if (guess < numberToGuess) {
            std::cout << "Your guess is too low.\n";
        }
        else {
            std::cout << "Correct! You win!\n";
            break;
        }

        ++noOfTries;
    }

    std::cout << "Sorry, you lose.The correct number was " << numberToGuess << ".\n";

    char playAgain{ getChar() };
    std::cout << playAgain;
    

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
            return x;
        }
    }
}

char getChar()
{
    while (true) // Loop until user enters a valid input
    {
        std::cout << "Would you like to play again (y/n)? ";
        char operation{};
        std::cin >> operation;

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
        switch (operation)
        {
        case 'y':
        case 'Y':
        case 'n':
        case 'N':
            return operation; // return it to the caller
        default: // otherwise tell the user what went wrong
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
    } // and try again
}