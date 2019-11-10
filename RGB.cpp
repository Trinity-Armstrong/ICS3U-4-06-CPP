// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: November 2019
// This program outputs all the RGB colour codes

#include <iostream>

int main() {
    // This function outputs all the RGB colour codes

    // variables
    int red;
    int green;
    int blue;

    // process
    for (red = 0; red <= 256; red++) {
        for (green = 0; green <= 256; green++) {
            for (blue = 0; blue <= 256; blue++) {
                std::cout << "RGB: " << red << "," << green << "," << blue
                << std::endl;
            }
        }
    }
}
