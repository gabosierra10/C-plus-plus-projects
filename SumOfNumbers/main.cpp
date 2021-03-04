//
//  main.cpp
//  Sum of Numbers
//
//  Created by Gabriel Sierra Bello on 3/3/20.
//  Copyright © 2020 Gabriel Sierra Bello. All rights reserved.
//
/*Write a function that accepts an integer argument and returns the sum of all the integers from 1 up to the number passed as an argument. 
For example, if 50 is passed as an argument, the function will return the sum of 1, 2, 3, 4, … 50. Use recursion to calculate the sum. 
Demonstrate the function in a program. */

#include <iostream>
using namespace std;

int sum(int);

int sum(int temp){
    
    //Base Case
    if(temp < 0){
        cout << "Invalid sum parameter" << endl;
        return -1;
     }
    
    //Base Case
    if(temp <= 1){
        return temp;
    }
    
    //Recursion
    return temp + sum(temp-1);
    
}

int main() {
    int temp;
    cout << "Enter your sum parameter: " << endl;
    cin >> temp;
    cout << "This is the sum of all the integers leading up to " << temp << ": " << sum(temp) << endl;
}


