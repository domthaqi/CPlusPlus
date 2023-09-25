/*
Author: DAMENIK THAQI
Course: CSCI-135
Instructor: TONG YI
Assignment: Lab 2C
*/

#include <iostream>
using namespace std;

int main() {
    int myData[10];
    
   
    for (int i = 0; i < 10; i++) {
        myData[i] = 1;
    }
    
    do {
        for (int i = 0; i < 10; i++) {
            cout << myData[i] << " ";
        }
        cout << endl;
        
    
        int index;
        cout << "Input index: ";
        cin >> index;
        
        if (index >= 0 && index < 10) {
            int value;
            cout << "Input value: ";
            cin >> value;
            
        
            myData[index] = value;
        } else {
            cout << "Index out of range. Exit." << endl;
            break;
        }
    } while (true);
    
    return 0;
}
