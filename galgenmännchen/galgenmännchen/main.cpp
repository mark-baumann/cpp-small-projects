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
    
    int failed = 0;
    
   
    
    cout<<"Folgendes Wort wird gesucht" <<out <<endl;
    while(out.find("_")!= string::npos) {
        char input;
        cin>>input;
                 
        if (name.find(input) == string::npos){
            failed++;
        }else{
            for (int i=0; i < name.length(); i++) {
                                if(name[i] == input) {
                                    out[i] = input;
                                }
                            }
        }
                      
                      
                      
                      
                
    
        cout<<"Folgendes Wort wird gesucht:" <<out <<endl <<"Du hast noch" <<(10 - failed) <<"Fehlversuche übrig";
    
    }
    
    
      
}
