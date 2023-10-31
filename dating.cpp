// Copyright (c) 2023 Santiago Hewett All rights reserved.
//
// Created by: Santiago Hewett
// Date: Oct 30, 2023
// This program will ask the user
// for their age and tell them if
// they can date my grandchild

#include <iostream>

// Include this for std::setprecision

#include <cmath>
#include <iomanip>

int main() {
    // declare variables

    int userAgeInt;
    std::string userAgeString;

    // get the userInt and display message

    std::cout << "This program will ask the user for their age ";
    std::cout << "then it will display if you are eligible ";
    std::cout << "to date my grandchild.";
    std::cout << "\nEnter an age: ";
    std::cin >>
        userAgeString;

    // Try catch statement

    try {
        // Convert userAgeAsString to int

        int userAgeInt = std::stoi(userAgeString);

        // When userAgeAsInt is a age that can date

        if (userAgeInt > 25 && userAgeInt < 40) {
            std::cout << "\nCongratulations you can date my grandchild";

        } else {
            // Display that the age entered is invalid

            if (userAgeInt < 0 || userAgeInt > 120) {
                std::cout << "\n"
                << userAgeInt << " is not a valid age.";

            } else if (userAgeInt < 25) {
                // Display that the age entered is too young
                std::cout << "\n"
                << "You are too young for my grandchild.";

            } else {
                // Display that the age entered is too old
                std::cout << "\n"
                << "You are too old for my grandchild.";
            }
        }
    } catch (std::invalid_argument) {
        // Display that the user age was not valid

        std::cout << "\n"
        << userAgeString << " is not a valid age.";
    }

    // finally statement

    std::cout << "\n\nThank you for playing";
}
