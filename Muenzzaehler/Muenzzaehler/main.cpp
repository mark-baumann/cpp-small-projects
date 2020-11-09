//
//  main.cpp
//  Muenzzaehler
//
//  Created by Mark Baumann   on 09.11.20.
//  Copyright © 2020 Mark Baumann. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int c1 = 0;
    int c2 = 0;
    int c5 = 0;
    int c10 = 0;
    int c20 = 0;
    int c50 = 0;
    int eingabe = 0;
    int sum = 0;
    
    while (true) {
        
        cout<<"Gebe eine Münze ein";
        cin>>eingabe;
        
        
        switch (eingabe) {
            case 1:
                c1++;
                break;
            
            case 2:
                c2++;
                break;
                
            case 5:
                c5++;
                break;
                
            case 10:
                c10++;
                break;
                
                
            case 20:
                c20++;
                break;
                
            case 50:
                c50++;
                
                
            
            default:
                cout<<"zahl gibt es nicht";
                break;
        }
        
        
    
        sum = c1*1 + c2*2 + c5*5 + c10*10 + c20*20 + c50*50;
        cout<<"Münze 1: "<<c1<<"\n"<<"Münze 2: "<<c2<<"\n"<<"Münze 5: "<<c5<<"\n"<<"Münze 10: "<<c10<<"\n"<<"Münze 50: "<<c50<<"\n"<<"Summe: "<<sum<<"\n";
        
        
        
        cout<<"Münze 1"<<"\t"<<"Münze 2"<<"\t"<<"Münze 5"<<"\t"<<"Münze 10"<<"\t"<<"Münze 50"<<"\t"<<"\n";
      for(int i=0; i<=10; i++){
            
            if(i < c1) {
                cout<<"X"<<"\t"<<"\t";
            }else{
                cout<<" "<< "\t"<<"\t";
            }
          
          if(i < c2) {
              cout<<"X"<<"\t"<<"\t";
          }else{
              cout<<" "<<"\t"<<"\t";
          }
          
          if(i < c5) {
              cout<<"X"<<"\t"<<"\t";
          }else{
              cout<<" "<<"\t"<<"\t";
          }
          
          if(i < c10) {
              cout<<"X"<<"\t"<<"\t";
          }else{
              cout<<" "<<"\t"<<"\t";
          }
        
          if(i < c20) {
              cout<<"X"<<"\t"<<"\t";
          }else{
              cout<<" "<<"\t"<<"\t";
          }
          
          if(i < c50) {
              cout<<"X"<<"\t"<<"\t";
          }else{
              cout<<" "<<"\t"<<"\t";
          }
            
          
          
          cout<<endl;
            
            
        }
    
}
    
    
    
}
