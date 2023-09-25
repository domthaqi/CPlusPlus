
/*
Author: DAMENIK THAQI
Course: CSCI-135
Instructor: TONG YI
Assignment: Project 1C
*/

#include <iostream>
using namespace std;

int main() {
    int result = 0;
    char op = '+';

    while (true) {
        int num;
        char ch;

        if (!(cin >> num)) {
            break;
        }

        while (true) {
            if (op == '+') {
                result += num;
            } else if (op == '-') {
                result -= num;
            }

            cin >> ch;

            if (ch == ';') {
                cout << "Result: " << result << endl;
                result = 0;
                op = '+';
                break;
            } else if (ch == '+' || ch == '-') {
                op = ch;
            } else {
                cout << "Invalid operator: " << ch << endl;
                return 1;
            }

            cin >> num;
        }
    }

    return 0;
}
