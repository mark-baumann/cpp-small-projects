//
//  main.cpp
//  TicTacToe_Vectoren
//
//  Created by Mark Baumann   on 20.10.20.
//  Copyright © 2020 Mark Baumann. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;



int main(int argc, const char * argv[]) {
   //Spielfeld erzeugen
    vector<vector<int>> field = {
        {0,0,1},
        {0,1,0},
        {1,0,0}
    };
    
    
    //erste Zeile
    //als erstes wird auf die Zeile zugegriffen, dann auf die Spalte
    for(int i=0; i<=2;i++) {
        if (field.at(i).at(0) != 0 &&
            field.at(i).at(0) == field.at(i).at(1) &&
            field.at(i).at(0) == field.at(i).at(2)){
            cout<<"Gewinner Zeile"<<endl;
        }
    }
    
    //erste Spalte
    for(int i=0; i <=2; i++) {
        if(field.at(0).at(i) != 0 &&
           field.at(0).at(i) == field.at(2).at(0) &&
           field.at(0).at(i) == field.at(1).at(0)){
            cout<<"Gewinner Spalte"<<endl;
        }
    }
    
    //Spalte 1
    if(field.at(0).at(0) != 0 &&
       field.at(0).at(0) == field.at(1).at(1) &&
       field.at(0).at(0) == field.at(2).at(2)) {
        cout<<"Gewinner Vertikal 1"<<endl;
    }
    
    
    
    //Spalte 2
    if(field.at(0).at(2) != 0 &&
       field.at(0).at(2) == field.at(1).at(1) &&
       field.at(0).at(2) == field.at(2).at(0)) {
        cout<<"Gewinner Vertikal 2"<<endl;
    }
    
    
    
    
    //Ausgabe
    cout << field.at(0).at(0) << " | " << field.at(0).at(1) << " | " << field.at(0).at(2) <<endl;
    cout << field.at(1).at(0) << " | " << field.at(1).at(1) << " | " << field.at(1).at(2) <<endl;
    cout << field.at(2).at(0) << " | " << field.at(2).at(1) << " | " << field.at(2).at(2) <<endl;
}
