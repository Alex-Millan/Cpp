//
//  Game.hpp
//  Black Jack
//
//  Created by Alex on 1/21/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp



#include <stdio.h>
#include <vector>
#include "Deck.hpp"


using namespace std;

class Game {
protected:
    vector<int> hand;
    Deck gameDeck;
public:
    void draw();
    int handValue();    // returns your the value of all your cards (10-13 are all valued as 10 in black jack)
    int cardsRemaining();
    virtual void viewHand() = 0;    // prints your current hand on screen, dealer hides 1 card (Face down) 
};

class Dealer : public Game {
public:
     void viewHand();
};

class Player : public Game {
public:
     void viewHand();
};

#endif /* Game_hpp */
