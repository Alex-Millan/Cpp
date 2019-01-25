//
//  Game.cpp
//  Black Jack
//
//  Created by Alex on 1/21/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include "Game.hpp"
#include <iostream>


using namespace std;

void Game::draw() {
    hand.push_back(gameDeck.drawCard());
}

int Game::handValue() {
    int sum = 0;
    bool Ace_card = false;
    for (int i = 0; i < hand.size(); i++) {
        hand.at(i) > 10 ? sum += 10 : sum += hand.at(i);
        if(hand.at(i) == 1) {
            Ace_card = true;
        }
     }
    // turn the Ace to 11 as long as you don't bust
    if(Ace_card) {
        if((sum + 10) <= 21) {
            sum+= 10; // note since we already added a 1 adding a 10 will make it adding an 11 total
        }
    }
    
    return sum;
}

int Game::cardsRemaining() {
    return gameDeck.getCardsRemaining();
}

bool Game::gameOver() {
    return handValue() > MAX_VALUE ? true : false;
}



void Player::viewHand() {
    cout << "Your hand is: " ;
    for (int i = 0; i < hand.size(); i++) {
        cout << cardName[hand.at(i)] << " " ;
    }
    cout << endl;
    
}

//Dealer has 1 card face down that only they know
void Dealer::viewHand() {
    cout << "Dealer's hand: " ;
    if(!isDealerTurn) {
        cout << cardName[hand.at(0)] << " and 1 face down card";
    } else {
        for (int i = 0; i < hand.size(); i++) {
            cout << cardName[hand.at(i)] << " ";
        }
    
    }
    cout << endl;
}

void Dealer::dealerTurn() {
    isDealerTurn = true;
    while(handValue() < 17){
        draw();
    }
}


