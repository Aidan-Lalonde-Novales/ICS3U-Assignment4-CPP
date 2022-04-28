// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-04-27
// This program receives an XY coordinate, then tells the user
// what quadrant (I, II, III, IV) that coordinate lies in.

#include <iostream>
#include <string>

int main() {
    // this function finds out what quadrant an XY coordinate is in
    std::string xCoordString;
    int xCoord;
    std::string yCoordString;
    int yCoord;

    // input
    std::cout << "Enter your X coordinate: ";
    std::cin >> xCoordString;
    std::cout << "Enter your Y coordinate: ";
    std::cin >> yCoordString;

    // process & output
    try {
        float xCoord = std::stof(xCoordString);
        float yCoord = std::stof(yCoordString);

            if (xCoord > 0 && yCoord > 0) {
                std::cout << "\nYour coordinate is in quadrant I."
                << std::endl;
            } else if (xCoord < 0 && yCoord > 0) {
                std::cout << "\nYour coordinate is in quadrant II."
                << std::endl;
            } else if (xCoord < 0 && yCoord < 0) {
                std::cout << "\nYour coordinate is in quadrant III."
                << std::endl;
            } else if (xCoord > 0 && yCoord < 0) {
                std::cout << "\nYour coordinate is in quadrant IV."
                << std::endl;
            } else if (xCoord == 0 && yCoord == 0) {
                std::cout << "\nYour coordinate is on the origin."
                << std::endl;
            } else {
                std::cout << "\nYour coordinate is between quadrants."
                << std::endl;
            }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid Coordinates. Please Re-Run." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
