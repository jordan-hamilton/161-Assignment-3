/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 01/22/2018
 ** Description: This program prompts the user to select the number,
 ** of integers they'd like to input, prompts the user for an integer
 ** as many times as previously requested, then determines the minimum
 ** and maximum values entered. The results are output to the screen.
 *********************************************************************/

#include <iostream>

int main()
{
    // Define variables prior to user input
    int counter, minimum, maximum;

    // Prompt for the number of integers that will be entered,
    // then use this number in for loop counter
    std::cout << "How many integers would you like to enter?" << std::endl;
    std::cin >> counter;
    std::cout << "Please enter " << counter << " integers." << std::endl;

    for (int i = 0; i < counter; i++) {
      int inputInteger;
      std::cin >> inputInteger;

      // If this is the first integer the user enters, we'll initialize
      // both minimum and maximum to this value.
      if (i == 0) {
        minimum = maximum = inputInteger;
      } else {

        // Compare input from subsequent iterations with the current minimum and maximum,
        // then reassign those values if we're given a new minimum or maximum.
        if (inputInteger < minimum) {
          minimum = inputInteger;
        }
        if (inputInteger > maximum) {
          maximum = inputInteger;
        }
      }
    }

    // Display the determined minimum and maximum integers to the user
    std::cout << "min: " << minimum << std::endl;
    std::cout << "max: " << maximum << std::endl;

    return 0;
}
