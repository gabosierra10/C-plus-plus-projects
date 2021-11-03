//
//  main.cpp
//  Array Backwards
//
//  Created by Gabriel Sierra Bello on 3/5/20.
//  Copyright © 2020 Gabriel Sierra Bello. All rights reserved.
//

#include <iostream>
using namespace std;

void writeArrayBackward(const char[], int, int);

int main() {
    char* test= new char[20];
    int temp;
    cout << "Enter your name: " << endl;
    cin >> test;
    cout << "How many characters does your name have?" << endl;
    cin >> temp;
    cout << "Your name reversed is: ";
    writeArrayBackward(test, 0, temp); 
    cout << endl;
    
    return 0;
}

/** Writes the characters in an array backward.
@pre The array anArray contains size characters, where size >= 0.
@post None.
@param anArray The array to write backward.
@param first The index of the first character in the array.
@param last The index of the last character in the array. */
void writeArrayBackward(const char anArray[], int first, int last){
    if (first <= last){
        // Write the last character
        cout << anArray[last];
        // Write the rest of the array backward
        writeArrayBackward(anArray, first, last - 1);
    } // end if
    // first > last is the base case - do nothing
} // end writeArrayBackward

