/*
Author: DAMENIK THAQi
Course: CSCI-135
Instructor: TONG YI
Assignment: LAB1b
*/
#include <iostream>

int main() {
  int num1, num2;
  std::cout << "Enter the first number:";
  std::cin >> num1;

  std::cout << "Enter the second number:";
  std::cin >> num2;


  if (num1 < num2) {
std::cout << "The smaller of the two is " << num1 << std::endl;
  } else {
std::cout << "The smaller of the two is " << num2 << std::endl;
  }
return 0;

}

