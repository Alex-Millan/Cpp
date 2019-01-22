//
//  Deck.cpp
//  Black Jack
//
//  Created by Alex on 1/21/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include "Deck.hpp"
#include <iostream>

#include <cstdlib>
#include <ctime>


using namespace std;

vector<int> Deck::cards;

Deck::Deck() {
    // Initializes deck with 4 sets of 1-13 (Ace - King)
    if(cards.empty()) {
        for (int i = 0; i < DECK_SIZE; i++) {
            cards.push_back((i%13) + 1);
        }
    }
}



int Deck::drawCard() {
    srand((unsigned int)time(NULL)); // creates a random seed with current time.
    int randomDraw = rand() % cards.size();
    
    int card_Value = cards[randomDraw];
    //cout << "A " << card_Value << " was drawn. " << endl;
    cards.erase(cards.begin() + randomDraw);
    return card_Value;
    
}

int Deck::getCardsRemaining() {
    return (int) cards.size();
}

void Deck::reinit() {
    //clears all cards
    if(!cards.empty()) {
        cards.erase(cards.begin(), cards.end());
    }
    
    //re initalizes the deck
    for (int i = 0; i < DECK_SIZE; i++) {
        cards.push_back((i%13) + 1);
    }
}
