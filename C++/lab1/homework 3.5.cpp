/*
Author: DAMENIK THAQi
Course: CSCI-135
Instructor: TONG YI
Assignment: HOMEWORK E3.5
*/

#include <iostream>

int main() {
    int num1, num2, num3;

    std::cout << "Enter the number: ";
    std::cin >> num1;
    std::cout << "Enter the number: ";
    std::cin >> num2;
    std::cout << "Enter the number: ";
    std::cin >> num3;

    if (num1 < num2 && num2  < num3) {
        std::cout << "Increasing" << std::endl;
    }
    else if (num1 > num2 && num2 > num3) {
        std::cout << "Decreasing" << std::endl;
    }
    else {
        std::cout << "Neither" << std::endl;
    }

    return 0;
}
