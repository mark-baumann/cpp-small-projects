//
//  main.cpp
//  TicTacToe_Object
//
//  Created by Mark Baumann   on 27.10.20.
//  Copyright © 2020 Mark Baumann. All rights reserved.
//

#include <iostream>
#include <vector>
#include "TicTacToe.cpp"

using namespace std;


int main(int argc, const char * argv[]) {
    
    TicTacToeField f;
    
    cout<<f.calculateWinner();
    cout<<endl;
    f.printField();
    
}
