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
#include <fstream>

int main()
{
    // Define an input file stream object
    std::ifstream inputFile;

    // Define a variable for the name of the file we'll read
    std::string fileName;

    // Prompt for the name of the file to read
    std::cout << "Please enter your filename (you can type example.txt" << std::endl;
    std::cout << "if you haven't created a file in this directory):" << std::endl;
    std::cin >> fileName;

    // Try to open the file based on the name of the file provided
    inputFile.open(fileName);

    // Begin our summation if we can open the file
    if (inputFile) {
      // Create an output file stream object in this scope since we now know
      // we have a readable input file
      std::ofstream outputFile;

      // Define the integer value we'll read from each line of the input file
      int integerRead;

      // Define and initalize our accumulator
      int sum = 0;

      // Loop through lines in the input file while there are readable values
      while (inputFile >> integerRead) {

        // Add the value of each line in the input file to our accumulator
        sum += integerRead;
      }

      // Close the input file when there are no more values to read.
      inputFile.close();

      // Open our output file and write the sum
      outputFile.open("sum.txt");
      outputFile << sum;

      // Close our output file and inform the user
      outputFile.close();
      std::cout << "result written to sum.txt" << std::endl;

    } else {

      // Inform the user that we couldn't open the designated file
      std::cout << "could not access file" << std::endl;
    }

    return 0;
}
