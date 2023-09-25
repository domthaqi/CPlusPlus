
/*
Author: DAMENIK THAQi
Course: CSCI-135
Instructor: TONG YI
Assignment: LAB 1D
*/

#include <iostream>


int main(){
  int month, year;
  std::cout << "Enter Year:";
  std::cin >> year;

  std::cout <<"Enter Month:";
  std::cin >> month;
 
int days = 0;
bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);


    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month == 2) {
        days = isLeapYear ? 29 : 28;
    }

std::cout << days << " days" << std::endl;

return 0;
  
}




  
