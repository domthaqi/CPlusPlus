/*
Author: DAMENIK THAQI
Course: CSCI-135
Instructor: TONG YI
Assignment: Project 2B
*/

#include <iostream>

using namespace std;

int main() {
    int result = 0;
    char op = '+';

    while (true) {
        int num;
        if (!(cin >> num)) {
            break;
        }

        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        }

        cin >> op;
    }

    cout << result << endl;

    return 0;
}
