//
//  main.cpp
//  TicTacToe
//
//  Created by Mark Baumann   on 15.10.20.
//  Copyright © 2020 Mark Baumann. All rights reserved.
//

#include <iostream>
#include <array>


using namespace std;





int main(int argc, const char * argv[]) {
    
    //Array erzeugen
    array<array<int, 3>, 3> field;
    
    //Daten einfügen
    field[0] = {5, 0, 0};
    field[1] = {0, 5, 0};
    field[2] = {0, 0, 5};
    
    //ausgeben wer gewonnen hat
    for (int i = 0; i <= 2; i++) {
        if(field[i][0] != 0 && field[i][0] == field[i][1] &&  field[i][0] == field[i][2]) {
            cout<< field[i][0] << " hat gewonnen \n";
        }
            
    }
    for (int i = 0; i <=2; i++) {
        if(field[0][i] !=0 && field[0][i] == field[1][i] && field[0][i] == field[2][i]){
            cout<< field[0][i] << " hat gewonnen \n";
        }
    }
    
    if(field[0][0] != 0 && field[0][0] == field[1][1] && field[0][0] == field[2][2]) {
        cout<<field[0][0] <<" hat gewonnen \n";
    }
    
    if(field[0][2] != 0 && field[0][2] == field[1][1] && field[0][2] == field[2][0]) {
        cout<<field[0][2] <<"hat gewonnen \n";
    }
    
    
    //Aufmalen des Array Spielfelds
    cout << field[0][0] << " | " << field[0][1] << " | " << field[0][2] <<endl;
    cout << field[1][0] << " | " << field[1][1] << " | " << field[1][2] <<endl;
    cout << field[2][0] << " | " << field[2][1] << " | " << field[2][2] <<endl;
}
