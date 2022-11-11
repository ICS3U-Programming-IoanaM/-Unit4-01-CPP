// Copyright (c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu
//
// Date: Nov. 11, 2022
// a program that displays the sum of all the numbers leading
// up to the user's imputed number


#include <iostream>

int main() {
    // variables
    std::string userNumString;
    int userNumInt, counter, totalSum;

    // getting user input
    std::cout << "Please enter a whole number: ";
    std::cin >> userNumString;

    // try catch
    try {
        // checks if user num is an integer or not
        userNumInt = stoi(userNumString);

        // if user imputed a negative number
        if (userNumInt < 0) {
            std::cout << "Input invalid! Please enter a WHOLE number.";

        // if user imputed a whole number
        } else {
            // adds up all the numbers until the user's number
            while (counter <= userNumInt) {
                totalSum += counter;
                counter++;
            }

            // displays the sum of all the numbers until the user's number
            std::cout << "The sum of all the numbers until "
                      << userNumInt << " is " << totalSum << std::endl;
        }

    // if user did not input an integer
    } catch (std::invalid_argument) {
        std::cout << "Input invalid! Please enter a WHOLE number.";
    }

    std::cout << "Thank you for using this program!";
}
