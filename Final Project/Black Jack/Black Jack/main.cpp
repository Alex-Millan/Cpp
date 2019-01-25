//
//  main.cpp
//  Black Jack
//
//  Created by Alex on 1/21/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <iostream>
#include "Deck.hpp"
#include "Game.hpp"
using namespace std;


#define HIT 'h'
#define STAND 's'
#define SPLIT 'p'



bool dealerWins(Dealer dealer, Player p1) {
    if(p1.gameOver()) {
        return true;
    }
    if(dealer.handValue() > p1.handValue() && !dealer.gameOver()) {
        return true;
    }
    return false;
}

bool isTied(Dealer dealer, Player p1) {
    if(dealer.handValue() == p1.handValue()) {
        return true;
    }else if(dealer.gameOver() && p1.gameOver()) {
        return true;
    } else {
        return false;
    }
}


//Prints out the final results and states who wins or tied.

void results(Dealer opponent, Player player1) {
    cout << "Dealer's Hand Value: " << opponent.handValue() << endl;
    if(dealerWins(opponent, player1)) {
        cout << "Dealer wins!" << endl;
    }
    else if(isTied(opponent, player1)) {
        cout << "Push-back: it's a tie!" << endl;
    } else {
        cout << "YOU WIN ! ! !" << endl;
        cout << "now take your profit and run while you still can." << endl;
    }
}

void controller(Game *p) {
    while(1) {
    p->viewHand();
        if(p->gameOver()) {
            cout << "BUST, better luck next time! " ;
            return;
        }
    cout << "Hit (h) Stand (s) or Split (p): ";
    char userInput = 0;
    cin >> userInput;
    
    switch(userInput){
        case HIT:
            p->draw();
            break;
        case STAND:
            return; // ends turn
        case SPLIT:
            //TODO: Add split function
            cout << "Function not yet added" << endl;
            break;
        default:
            cout << "Expected 'h', 's' or 'p' but got " << userInput << endl;
            
    }
    cout << endl; // new line
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Deck myDeck;
    // plays 5 games
    myDeck.shuffle(5);
    for (int i = 0; i < 5; i++) {
        
        Player player1;
        Dealer opponent;
        
        
        player1.draw();
        opponent.draw();
        player1.draw();
        opponent.draw();
        opponent.viewHand();
        controller(&player1);
        
        cout << "Final Hand Value: " << player1.handValue() << endl;
        
        
        if(!player1.gameOver()) {
            opponent.dealerTurn();
        }
        opponent.viewHand();
        cout << endl;
        results(opponent, player1);

        
        cout << "Cards Remaining " << player1.cardsRemaining() << endl;
        cout << endl << endl;
    }
    
    return 0;
}
