// Copyright (c) 2022 NAvin Balekomebole All rights reserved.
//
// Created by: Navin Balekomebole
// Created on: Jan 28, 2022
// This program gets two numbers and an operation
// from the user, it then calculates a solution using
// the inputs.
#include <iostream>
#include <cmath>


// this function calculates the solution
float calculate(std::string sign, float firstNumber, float secondNumber) {
    // declare variable
    float solution;

    if (sign == "+") {
        solution = firstNumber + secondNumber;
    } else if (sign == "-") {
        solution = firstNumber - secondNumber;
    } else if (sign == "*") {
        solution = firstNumber * secondNumber;
    } else if (sign == "/") {
        solution = firstNumber / secondNumber;
    } else if (sign == "%") {
        solution = std::fmod(firstNumber, secondNumber);
    } else {
        solution = -1;
    }
    // return answer to main
    return solution;
}


int main() {
    // declare variables
    std::string number1String;
    std::string number2String;
    float number1;
    float number2;
    std::string operation;
    float solutionMain;

    // get inputs
    std::cout << "Enter the first number: ";
    std::getline(std::cin, number1String);

    std::cout << "Enter the operation (+, -, *, /, %): ";
    std::getline(std::cin, operation);

    std::cout << "Enter the second number: ";
    std::getline(std::cin, number2String);
    // error checking
    try {
        number1 = stof(number1String);
        number2 = stof(number2String);
        solutionMain = calculate(operation, number1, number2);
        // error checking
        if (solutionMain == -1) {
            std::cout << "Invalid input(s).";
        } else {
            // output the solution
            std::cout << "The solution is " << solutionMain << ".";
        }
    } catch(std::invalid_argument) {
        std::cout << "Invalid input.";
    }
}
