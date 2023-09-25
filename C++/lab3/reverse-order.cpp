/*
Author: DAMENIK THAQI
Course: CSCI-135
Instructor: TONG YI
Assignment: LAB 3D
*/


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>

using namespace std;

int main() {
    ifstream dataFile("Current_Reservoir_Levels.tsv");

    if (dataFile.fail()) {
        cerr << "Error: Unable to open the file for reading." << endl;
        exit(1);
    }

    string header;
    getline(dataFile, header);

    string start_date, end_date;
    cout << "Enter the starting date: ";
    cin >> start_date;
    cout << "Enter the ending date: ";
    cin >> end_date;

    string date;
    double east_storage, east_elevation, west_storage, west_elevation;

    string date_array[365];
    float west_elevation_array[365];
    int index = 0;

    while (dataFile >> date >> east_storage >> east_elevation >> west_storage >> west_elevation) {
        dataFile.ignore(INT_MAX, '\n');

        if (date >= start_date && date <= end_date) {
            date_array[index] = date;
            west_elevation_array[index] = west_elevation;
            index++;
        }
    }

    for (int i = index - 1; i >= 0; i--) {
        cout << date_array[i] << " " << west_elevation_array[i] << endl;
    }

    return 0;
}
