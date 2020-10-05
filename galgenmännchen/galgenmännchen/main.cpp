//
//  main.cpp
//  galgenmännchen
//
//  Created by Mark Baumann   on 05.10.20.
//  Copyright © 2020 Mark Baumann. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    
    
    string name="GALGENMAENNCHEN";
    string out="";
    
    for (int i = 0; i <  name.length(); i++) {
        out.append("_");
    }
    
    
    cout<<"Folgendes Wort wird gesucht" <<out <<endl;
    while(true) {
        char input;
        cin>>input;
                 
                 
                 for (int i=0; i < name.length(); i++) {
                     if(name[i] == input) {
                         out[i] = input;
                     }
                 }
    
        cout<<"Folgendes Wort wird gesucht:" <<out <<endl;
    
    }
    
    
      
}
