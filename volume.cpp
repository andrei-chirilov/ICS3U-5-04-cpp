// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: November 2019
// This program calcultes the volume of a cylinder

#include <math.h>
#include <iostream>
#include <string>


float VolumeCalculator(float radius, float height) {
    // This'll calculate the volume of a cylinder

// variables
    float volume;

    // process
    volume = M_PI * radius * radius * height;
    return volume;
}

int main() {
    // This asks for user input and runs VolumeCalculator()

    // variables
    std::string radiusString;
    std::string heightString;
    float radius;
    float height;
    float volume;


    while (true) {
        try {
            // input
            std::cout << "What is the radius: " << std::endl;
            std::cin >> radiusString;
            std::cout << "What is the height: " << std::endl;
            std::cin >> heightString;
            // converts strings to float
            radius = std::stof(radiusString);
            height = std::stof(heightString);
            // runs Volume_Calculator()
            volume = VolumeCalculator(radius, height);
            // output
            std::cout << "The volume is " << volume << " units cubed."
                      << std::endl;
            break;
        } catch(std::invalid_argument) {
            std::cout << "Invalid input."<< std::endl;
        }
    }
}
