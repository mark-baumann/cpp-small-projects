//
//  TicTacToe.cpp
//  TicTacToe_Object
//
//  Created by Mark Baumann   on 27.10.20.
//  Copyright © 2020 Mark Baumann. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


class TicTacToeField {
private:
    vector<vector<int>> field;
    
    
public:
    
    TicTacToeField() {
        field={
            {2, 0, 1},
            {2, 1, 0},
            {1, 0, 1}
        };
        //cout<<"Ich werde aufgerufen wenn die Klasse erstellt wird";
    }
    int calculateWinner() {
                for(int i=0; i<=2;i++) {
                    if (field.at(i).at(0) != 0 &&
                        field.at(i).at(0) == field.at(i).at(1) &&
                        field.at(i).at(0) == field.at(i).at(2)){
                        return field.at(i).at(0);
                    }
                }
                
                //erste Spalte
                for(int i=0; i <=2; i++) {
                    if(field.at(0).at(i) != 0 &&
                       field.at(0).at(i) == field.at(2).at(0) &&
                       field.at(0).at(i) == field.at(1).at(0)){
                        return field.at(0).at(i);
                    }
                }
                
                //Spalte 1
                if(field.at(0).at(0) != 0 &&
                   field.at(0).at(0) == field.at(1).at(1) &&
                   field.at(0).at(0) == field.at(2).at(2)) {
                    return field.at(0).at(0);
                }
                
                
                
                //Spalte 2
                if(field.at(0).at(2) != 0 &&
                   field.at(0).at(2) == field.at(1).at(1) &&
                   field.at(0).at(2) == field.at(2).at(0)) {
                    return field.at(0).at(2);
                }
        return 0;
    }
    
    void printField() {
        for (const auto &row : field) {
            cout<<" | ";
            for (const auto &item : row) {
                cout << item << " | ";
            }
            cout << endl;
        }
    }
};


