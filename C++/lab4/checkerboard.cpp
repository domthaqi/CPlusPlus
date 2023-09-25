/*
Author: DAMENIK THAQI
Course: CSCI-135
Instructor: TONG YI
Assignment: LAB 4B
*/


#include <iostream>
using namespace std;

int main() {
    int width, height;

    cout << "Input width: ";
    cin >> width;

    cout << "Input height: ";
    cin >> height;

    cout << "\nShape:\n";
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if ((row + col) % 2 == 0) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
