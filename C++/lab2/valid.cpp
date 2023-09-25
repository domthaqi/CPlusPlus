/*
Author: DAMENIK THAQI
Course: CSCI-135
Instructor: TONG YI
Assignment: Lab 2A
*/


#include <iostream>
using namespace std;

int main() {
int number;

cout << "Enter a number between 1-100: ";
cin >> number;

while (number < 1 || number >= 100) {
cout << "Please Re-enter " << endl;
cin >> number;
}


int squared;
squared = number * number;
cout << "Number squared is: " << squared << endl;

return 0;
}