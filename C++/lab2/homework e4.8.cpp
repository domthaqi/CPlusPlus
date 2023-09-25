/*
Author: DAMENIK THAQI
Course: CSCI-135
Instructor: TONG YI
Assignment: Homework E4.8
*/


#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;

    cout << "Enter a word: ";
    cin >> word;
    
    for (char c : word) {
        cout << c << endl;
    }

    return 0;
}
