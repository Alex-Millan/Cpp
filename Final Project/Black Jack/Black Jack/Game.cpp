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
    return 0;
}



void Player::viewHand() {
    cout << "Your hand is " << endl;
    for (int i = 0; i < hand.size(); i++) {
        cout << hand.at(i) << " " << endl;
    }
    
}

//Dealer has 1 card face down that only he knows
void Dealer::viewHand() {

}
