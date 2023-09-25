
/*
Author: DAMENIK THAQi
Course: CSCI-135
Instructor: TONG YI
Assignment: LAB1C
*/
#include <iostream>


int main(){
  int year;
  std::cout << "Enter year:";
  std::cin >> year;

  if (year % 4!=0) {
    std::cout << "Common Year" << std::endl;
  } else if (year % 100!=0){
    std::cout << "Leap Year" << std::endl;
  } else if (year % 400!=0){
    std::cout << "Common Year" << std::endl;
  } else {
    std::cout << "Leap Year" << std::endl;
  }

  return 0;
  
}