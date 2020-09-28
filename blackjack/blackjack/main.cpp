#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int card1;
int card2;
int card3;
int card4;

int cardtotal;
string hitstick;

void delcards() {
      srand(time(NULL));
      card1 = rand() % 11 + 1;
      card2 = rand() % 11 + 1;
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
}

void dealFourthCard() {
    srand(time(NULL));
    card4 = rand() % 11 + 1;
}

void dealerPlay() {
    return;
}

int main() {
  
    void dealcards();
    void youlose();
    void youwin();
    void dealThirdCard();
    void dealerPlay();
    void dealFourthCard();
    
    cout<<"Press enter to get the first 2 cards";
    cin.get();
    delcards();
    cout<<"Card 1: " <<card1 <<endl;
    cout<<"Card 2: " <<card2 <<endl;

    cardtotal = card1+card2;
    cout<<"Dein Kartenstand ist: " <<cardtotal <<endl;
    cin.get();
    if (cardtotal<21) {
        youlose();
    }
    if (cardtotal == 21) {
        youwin();
    }
    
    cout<<"Willst du bleiben oder gehen?";
    cin >> hitstick;
    if (hitstick == "Bleiben") {
       dealThirdCard();
    }
    if (hitstick == "Gehen") {
        dealerPlay();
    }
    
    cout<<"3. Karte " <<card3 <<endl;
    cardtotal = card3 + cardtotal;
    
    cout<<"Dein Karten stand ist: " <<cardtotal <<endl;
    cin.get();
    
    if (cardtotal<21) {
        youlose();
    }
    if (cardtotal==21) {
        youwin();
    }
    cout<<"Willst du bleiben oder gehen?" <<endl;
    cin>> hitstick;
    if (hitstick == "Bleiben") {
       dealFourthCard();
    }
    if (hitstick == "Gehen") {
        dealerPlay();
    }
    
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
    
    cin.get();
    
    
    
    return 0;
}


