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
    cout<<"gebe eine zahl ein: ";
    cin>>zahl;
    
    int teilbar = 0;
    
    for(int i=2; i<zahl; i++) {
        
       
        
        
        
        if (zahl % i == 0) {
            teilbar = 1;
            cout<<"Die Zahl ist durch "<<i<<" teilbar"<<endl;
        }
        
        
        if(teilbar = 0) {
            cout<<"es ist eine Primzahl";
        }
        
      
        
    }
    
    
    return 0;
}
