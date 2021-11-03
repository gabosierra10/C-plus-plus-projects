//
//  main.cpp
//  Ackermann's function
//
//  Created by Gabriel Sierra Bello on 3/13/20.
//  Copyright © 2020 Gabriel Sierra Bello. All rights reserved.
//
/* Define a function that receivers 2 integers inputs and recursively performs Ackermann's function using these inputs. */

#include <iostream>
using namespace std;

int Acker(int, int);

int main() {
    int m,n;
    cout << "Enter your m value: " << endl;
    cin >> m;
    cout << "Enter your n value: "<< endl;
    cin >> n;
    cout << "Ackermann's function for m = " << m << " and n = " << n << " is " << Acker(m, n) << endl;
    return 0;
}

int Acker(int m, int n){
    if(m == 0){
        return n+1;
    }
    else if(n == 0){
        return Acker(m-1, 1);
    }
    else{
        return Acker(m-1, Acker(m,n-1));
    }
}

