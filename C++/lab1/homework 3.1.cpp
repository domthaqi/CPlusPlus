/*
Author: DAMENIK THAQi
Course: CSCI-135
Instructor: TONG YI
Assignment: HOMEWORK E3.1
*/


#include <iostream>

int main() {
    for (int i = 0; i < 3; ++i) {
        int number;

        std::cout << "Enter an Integer: ";
        std::cin >> number;

        if (number > 0) {
            std::cout << "The number is positive." << std::endl;
        } else if (number < 0) {
            std::cout << "The number is negative." << std::endl;
        } else {
            std::cout << "The number is zero." << std::endl;
        }
    }

    return 0;
}
