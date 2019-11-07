// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: November 2019
// This is a program which shows the numbers from 1000 - 2000.

#include <iostream>
#include <cmath>

int main() {
    // This is what runs the program.
    int number = 0;

    // Process
    for (number = 1000; number < 2001; number++) {
        std::cout << "" << (number) << " ";
        if (number % 5 == 0) {
            std::cout << "" << std::endl;
        }
    }
}
