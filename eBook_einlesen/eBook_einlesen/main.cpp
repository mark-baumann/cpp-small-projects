//
//  main.cpp
//  eBook_einlesen
//
//  Created by Mark Baumann   on 12.10.20.
//  Copyright © 2020 Mark Baumann. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(int argc, const char * argv[]) {
    
    ifstream file ("/Users/mark/Desktop/cpp-small-projects/eBook_einlesen/faust.txt");
    
    if (!file.is_open()) {
     
        cout<<"Datei konnte nicht geoeffnet werden";
    }else{
        string word;
        int counter = 0;
        
        
        //ausgabe der anzahl der zeichen
        while (!file.eof()) {
            file >> word;
            counter++;
        }
        
        cout<<"es wurden " <<counter <<" wörter eingelesen" <<endl;
        
       
        
        
        file.close();
        
    }
    
    
    
    return 0;
}
