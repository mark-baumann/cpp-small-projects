//
//  main.cpp
//  Palindrome_finden
//
//  Created by Mark Baumann   on 07.10.20.
//  Copyright © 2020 Mark Baumann. All rights reserved.
//

#include <iostream>

using namespace std;

bool palindrome(string word) {
    for (int i = 0; i < word.length(); i++) {
        if (word.at(i) != word.at(word.length() -1 - i)) {
            return false;
        }
       }
    return true;
}

int main(int argc, const char * argv[]) {
    string palindromeEingabe;
    cout<<"gebe ein Wort ein:";
    cin>>palindromeEingabe;
    if (palindrome(palindromeEingabe) == true) {
        cout<<palindromeEingabe<<" ist ein Palindrom";
    }else{
        cout<<palindromeEingabe<<" ist kein Palindrom";
   }
}
