// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on December 2020
// This program duplicates characters in a string

#include <iostream>

main() {
    // This function duplicates characters in a string
    std::string string;
    std::string num_chars_str;
    std::string duplicate_str;
    int num_chars_int;
    int duplicate_int;
    int counter_duplicate;
    int counter_chars;

    // Input
    std::cout << "Please enter a String: ";
    std::cin >> string;
    while (true) {
        std::cout << "Please enter the desired number of characters"
            " to be duplicated: ";
        std::cin >> num_chars_str;

        try {
            num_chars_int = std::stoi(num_chars_str);
            if (num_chars_int <= 0) {
                std::cout << "That is not a valid input, please input a number"
                    " greater than 0!" << std::endl;
                std::cout << "" << std::endl;
            } else {
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "That is not an integer, please input a number!"
            << std::endl;
            std::cout << "" << std::endl;
        }
    }
    while (true) {
        std::cout << "Please enter the desired number of"
            " duplications: ";
        std::cin >> duplicate_str;

        try {
            duplicate_int = std::stoi(duplicate_str);
            if (duplicate_int <= 0) {
                std::cout << "That is not a valid input, please input a number"
                    " greater than 0!" << std::endl;
                std::cout << "" << std::endl;
            } else {
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "That is not an integer, please input a number!"
            << std::endl;
            std::cout << "" << std::endl;
        }
    }
    std::cout << "" << std::endl;

    // Process & Output
    counter_duplicate = 0;
    while (counter_duplicate < duplicate_int) {
        counter_chars = 0;
        while (counter_chars < num_chars_int) {
            std::cout << string[counter_chars];
            counter_chars += 1;
        }
        counter_duplicate += 1;
    }
}
