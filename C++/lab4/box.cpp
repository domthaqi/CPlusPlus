/*
Author: DAMENIK THAQI
Course: CSCI-135
Instructor: TONG YI
Assignment: LAB 4A
*/

#include <iostream>

using namespace std;

int main() {
    int width, height;

    cout << "Input width: ";
    cin >> width;

    cout << "Input height: ";
    cin >> height;

    cout << endl << "Shape:" << endl;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

