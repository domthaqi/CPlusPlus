/*
Author: DAMENIK THAQI
Course: CSCI-135
Instructor: TONG YI
Assignment: LAB 3C
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
    
    while (dataFile >> date >> east_storage >> east_elevation >> west_storage >> west_elevation) {
        dataFile.ignore(INT_MAX, '\n');
        
        if (date >= start_date && date <= end_date) {
            if (east_elevation > west_elevation) {
                cout << date << " East" << endl;
            }
            else if (west_elevation > east_elevation) {
                cout << date << " West" << endl;
            }
            else {
                cout << date << " Equal" << endl;
            }
        }
    }
    
    return 0;
}
