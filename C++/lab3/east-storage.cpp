
/*
Author: DAMENIK THAQI
Course: CSCI-135
Instructor: TONG YI
Assignment: LAB 3A
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <climits>

using namespace std;

int main() {
    string date, storedDate, eastSt;

    cout << "Enter date (MM/DD/YYYY format): ";
    cin >> date;

    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    string junk;
    getline(fin, junk);

    bool found = false;

    while (fin >> storedDate >> eastSt) {
        fin.ignore(INT_MAX, '\n');

        if (storedDate == date) {
            found = true;
            break;
        }
    }

    fin.close();

    if (found) {
        cout << eastSt << " billion gallons." << endl;
    } else {
        cout << "Data for the specified date was not found." << endl;
    }

    return 0;
}
