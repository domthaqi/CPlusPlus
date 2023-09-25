/*
Author: DAMENIK THAQI
Course: CSCI-135
Instructor: TONG YI
Assignment: Homework E2.10
*/

#include <iostream>
using namespace std;

int main() {
    double gallons, efficiency, price;

    cout << "Enter the number of gallons of gas in the tank: ";
    cin >> gallons;

    cout << "Enter the fuel efficiency in miles per gallon: ";
    cin >> efficiency;

    cout << "Enter the price of gas per gallon: $";
    cin >> price;

    double costPer100Miles = (100.0 / efficiency) * price;
    double distance = gallons * efficiency;

    cout << "Cost per 100 miles: $" << costPer100Miles << endl;
    cout << "Distance the car can go with the gas in the tank: " << distance << " miles" << endl;

    return 0;
}
