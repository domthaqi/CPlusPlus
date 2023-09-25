/*
Author: DAMENIK THAQi
Course: CSCI-135
Instructor: TONG YI
Assignment: LAB1b
*/

#include <iostream>

int main() {
  int x,y,z;
  std::cout << "Enter the first number:";
  std::cin >> x;

  std::cout << "Enter the second number:";
  std::cin >> y;

  std::cout << "Enter the third number:";
  std::cin >> z;

int smallest = (x < y) ? x : y;

if (z < smallest){
  smallest = z;
}

  
std::cout << "The smaller of the three is " << smallest << std::endl;
  
return 0;

}

