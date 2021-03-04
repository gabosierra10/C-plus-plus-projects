//
//  main.cpp
//  Sum of Squares
//
//  Created by Gabriel Sierra Bello on 3/13/20.
//  Copyright © 2020 Gabriel Sierra Bello. All rights reserved.

/*
 INSTRUCTIONS: Define a recursive function that adds up the squares of every integer leading up to, and including, a given integer.
 */

#include <iostream>
using namespace std;

int squareSum(int);

int squareSum(int n){

    //Base Case
    if(n == 1){
        return 1;
    }
    
    //Recursion
    else{
        return (n*n) + squareSum(n-1);
    }
}

int main() {
    int x = -1;
    while(x < 1){
        cout << "Enter an integer greater than 0: " << endl;
        cin >> x;
    }
    cout << "The sum of the squares leading up to " << x << " is " << squareSum(x) << endl;
    return 0;
}


