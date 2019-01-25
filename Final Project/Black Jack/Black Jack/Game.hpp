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
#include <string>

#define UNIQUE_CARD_NAMES 14    //includes joker
#define MAX_STRING_SIZE 10
#define MAX_VALUE 21 //anything over 21 is a bust

using namespace std;

class Game {
protected:
    vector<int> hand;
    const char cardName[UNIQUE_CARD_NAMES][MAX_STRING_SIZE] = {"JOKER",
    "ACE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN","EIGHT", "NINE", "TEN", "JACK", "QUEEN", "KING"};
    Deck gameDeck;
public:
    void draw();
    int handValue();    // returns your the value of all your cards (10-13 are all valued as 10 in black jack)
    int cardsRemaining();
    bool gameOver();
    virtual void viewHand() = 0;    // prints your current hand on screen, dealer hides 1 card (Face down)
};

class Dealer : public Game {
private:
    bool isDealerTurn = false;
public:
    void viewHand();
    void dealerTurn();
};

class Player : public Game {
private:
    bool isValidSplit();
    
public:
    void split();
     void viewHand();
};

#endif /* Game_hpp */
