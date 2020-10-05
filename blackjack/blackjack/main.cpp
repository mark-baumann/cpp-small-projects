#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int card1;
int card2;
int card3;
int card4;
int cardD1;
int cardD2;
int cardD3;
int cardD4;


int cardtotal;
string hitstick;

void dealerfirst() {
    srand(time(NULL));
    cardD1 = rand() % 11 + 1;
    cardD2 = rand() % 11 + 1;
}


void delcards() {
      srand(time(NULL));
      card1 = rand() % 11 + 1;
      card2 = rand() % 11 + 1;
      card3 = rand() % 11 + 1;
      card4 = rand() % 11 + 1;
  }

void youwin() {
    cout<<"Du hast gewonnen" <<endl;
    return;
}

void youlose() {
    cout<<"Du hast verloren" <<endl;
    return;
}

void dealThirdCard() {
    srand(time(NULL));
    card3 = rand() % 11 + 1;
    return;
}

void dealFourthCard() {
    srand(time(NULL));
    card1 = rand() % 11 + 1;
}



int main() {
  
    void dealcards();
    void dealThirdCard();
    void dealFourthCard();
    void youlose();
    void youwin();
    void dealerfirst();
    
    
    cout<<"Drücke eine Karte um die ersten 2 Karten zu bekommen";
    cin.get();
    delcards();
    cout<<"Karte 1: " <<card1 <<endl;
    cout<<"Karte 2: " <<card2 <<endl;
    
    
    

    cardtotal = card1+card2;
    cout<<"Dein Kartenstand ist: " <<cardtotal <<endl;
    if (cardtotal>
        21) {
        youlose();
    }
    if (cardtotal == 21) {
        youwin();
    }
    
    cout<<"Willst du bleiben oder gehen? (bleiben = b, gehen = g)";
    cin >> hitstick;
    if (hitstick == "b") {
       dealThirdCard();
    }
    if (hitstick == "g") {
        
        
    }
    
    cout<<"3. Karte " <<card3 <<endl;
    cardtotal = cardtotal + card3;
    
    cout<<"Dein Karten stand ist: " <<cardtotal <<endl;
    cin.get();
    
    if (cardtotal>21) {
        youlose();
    }
    else if (cardtotal==21) {
        youwin();
    }
    cout<<"Willst du bleiben oder gehen? (bleiben = b, gehen = g)" <<endl;
    cin>> hitstick;
    if (hitstick == "b") {
       dealFourthCard();
    }
     if (hitstick == "g") {
        
    }
    
    cin.get();
    cout<<"4. Karte " <<card4 <<endl;
    cardtotal = cardtotal + card4;
    cout<<"Dein Kartenstand ist: " <<cardtotal <<endl;
    cin.get();
    if (cardtotal>21) {
        youlose();
    }
    if (cardtotal==21) {
        youwin();
    }

    
    return 0;
}


