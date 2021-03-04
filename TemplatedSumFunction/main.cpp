//
//  main.cpp
//  Total
//
//  Created by Gabriel Sierra Bello on 3/21/20.
//  Copyright © 2020 Gabriel Sierra Bello. All rights reserved.
//

/* Create a templated function that sums a given amount of values and returns the total of the sum.*/

#include <iostream>

using namespace std;

template <class T>
void total(int times){
    
    //Initialize variable to store total and temporary values.
    T total = 0;
    T temp;
    
    //Run loop to receive and sum all given values.
    for(int i = 0; i < times; i++){
        cout << "Enter a value: " << endl;
        cin >> temp;
        total += temp;
    }
    
    //Print result.
    cout << "The sum of your elements is " << total << endl;
}


int main() {
    int elements;
    cout << "How many elements do you wish to add?" << endl;
    cin >> elements;
    total<double>(elements);
    
    return 0;
}
