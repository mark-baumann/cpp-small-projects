//
//  main.cpp
//  fizzbuzz
//
//  Created by Mark Baumann   on 12.10.20.
//  Copyright © 2020 Mark Baumann. All rights reserved.
//

#include <iostream>
#include <iostream>

using namespace std;

//Programm das bei 3 Fizz sagt, bei 5 Buzz und bei zahlen die durch 3 und 5 teilbar sind Fizzbuzz



int main(int argc, const char * argv[]) {
    
  
    
    for(int i = 1; i <=100; i++){

      if(i % 3 == 0 && i % 5 == 0){
        std::cout << "FizzBuzz\n";
      }
      else if(i % 3 == 0){
        std::cout << "Fizz\n";
      }
      else if(i % 5 == 0){
        std::cout << "Buzz\n";
      }
      else{
        std::cout << i << "\n";
      }
    }
   
    
    
    return 0;
}
