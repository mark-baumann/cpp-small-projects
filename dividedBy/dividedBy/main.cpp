//
//  main.cpp
//  dividedBy
//
//  Created by Mark Baumann   on 06.10.20.
//  Copyright © 2020 Mark Baumann. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
   
    
    
    int zahl;
    cout<<"gebe eine zahl ein";
    cin>>zahl;
    
    for(int i=2; i<zahl; i++) {
        
       
        
        
        
        if (zahl % i == 0) {
            cout<<"Die Zahl ist durch "<<i<<"teilbar"<<endl;
        }
        
        if (zahl % i == 1) {
            cout<<"die zahl ist eine Primzahl"<<i<<endl;
        }
        
        
      
        
    }
    
    
    return 0;
}
