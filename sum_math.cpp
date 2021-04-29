// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Thu/Apr29/2021
// This program calculates the sum of two numbers


#include <iostream>


int main() {
    // this function calculates the sum of two numbers
    int firstNumber;
    int secondNumber;
    int sumNumber;

    std::cout << "This program adds 2 numbers together!" << std::endl;

    // input
    std::cout << "please enter the first number:"
    << std::endl;
    std::cin >> firstNumber;
    std::cout << "please enter the second number:"
    << std::endl;
    std::cin >> secondNumber;

    // process
    sumNumber = firstNumber + secondNumber;

    // output
    std::cout << "" << std::endl;
    std::cout << (firstNumber) << " + " << (secondNumber) << " = "
    << (sumNumber) << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
