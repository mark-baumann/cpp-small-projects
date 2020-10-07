//
//  main.cpp
//  funktionen_ueberladen
//
//  Created by Mark Baumann   on 07.10.20.
//  Copyright © 2020 Mark Baumann. All rights reserved.
//

#include <iostream>
#include <string>
 
using namespace std;
int maximum(int a, int b) {
    cout << "maximum(a, b)" << endl;
    if (a >= b) {
        return a;
    }
    else {
        return b;
    }
}
int maximum(int a, int b, int c) {
    cout << "maximum(a, b, c)" << endl;
    if (a >= b && a >= c) {
        return a;
    }
    if (b >= a && b >= c) {
        return b;
    }
    if (c >= a && c >= b) {
        return c;
    }
    return a;
}
int maximum(int a, int b, int c, int d) {
    cout << "maximum(a, b, c, d)" << endl;
    if (a >= b && a >= c && a >= d) {
        return a;
    }
    if (b >= a && b >= c && b >= d) {
        return b;
    }
    if (c >= a && c >= b && c >= d) {
        return c;
    }
    if (d >= a && d >= b && d >= c) {
        return d;
    }
    return a;
}
int main(int argc, const char * argv[]) {
    cout << maximum(1, 2, 3) << endl;
}
