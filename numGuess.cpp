/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 01/24/2018
 ** Description: This program prompts the enter a file name, then
 ** reads any integers from the file and calculates the sum.
 ** The sum is output to another file named sum.txt.
 ** The user is informed when the output is successful or when file
 ** name they've typed cannot be opened.
 *********************************************************************/

#include <iostream>
#include <string>

int main()
{
    // Define the number the player will have to guess,
    // a variable that stores the most recent guess,
    // and initialize an accumulator for the number of guesses.
    int numberToGuess, numberGuessed, totalGuesses = 0;

    // Prompt the user for the number the player will guess.
    std::cout << "Enter the number for the player to guess." << std::endl;
    std::cin >> numberToGuess;

    // Prompt the user to enter a guess
    std::cout << "Enter your guess." << std::endl;
    
    do {
      // Store the guess in a variable for comparison.
      std::cin >> numberGuessed;

      // Compare the number with the guess, then inform the
      // player if the guess is too high or too low.
      if (numberGuessed > numberToGuess) {
        std::cout << "Too high - try again." << std::endl;
      }
      if (numberGuessed < numberToGuess) {
        std::cout << "Too low - try again." << std::endl;
      }

      // Increment the number of attempted guesses.
      totalGuesses += 1;
    } while(numberGuessed != numberToGuess);

    // Inform the user of a correct guess and the number
    // of attempts once the loop has been exited.
    std::cout << "You guessed it in " << totalGuesses << " tries." << std::endl;

    return 0;
}
