/*
Author: DAMENIK THAQI
Course: CSCI-135
Instructor: TONG YI
Assignment: LAB 3B
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cfloat>
#include <climits>

using namespace std;

int main() {
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    string junk;
    getline(fin, junk);

    string date, storedDate, eastSt;
    double minEastSt = DBL_MAX;
    double maxEastSt = -DBL_MAX;

    while (fin >> storedDate >> eastSt) {
        fin.ignore(INT_MAX, '\n');

        if (storedDate.substr(6, 4) == "2018") {
            double eastStorage = stod(eastSt);
            
            if (eastStorage < minEastSt) {
                minEastSt = eastStorage;
            }
            if (eastStorage > maxEastSt) {
                maxEastSt = eastStorage;
            }
        }
    }

    fin.close();

    if (minEastSt != DBL_MAX && maxEastSt != -DBL_MAX) {
        cout << "Minimum East basin storage in 2018: " << minEastSt << " billion gallons." << endl;
        cout << "Maximum East basin storage in 2018: " << maxEastSt << " billion gallons." << endl;
    } else {
        cout << "No data found for the year 2018." << endl;
    }

    return 0;
}
