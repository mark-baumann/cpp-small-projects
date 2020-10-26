//
//  main.cpp
//  supermarkt
//
//  Created by Mark Baumann   on 26.10.20.
//  Copyright © 2020 Mark Baumann. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
   
    vector<double> entries;
    
    while(true) {
        double price;
        cin >> price;
        
        entries.push_back(price);
        
        cout<<"Die bisherige Summe ist: ";
        double sum = 0;
        for(double e:entries) {
            sum = sum + e ;
        }
        cout << sum << endl;
    }
    
    
    
    
}
