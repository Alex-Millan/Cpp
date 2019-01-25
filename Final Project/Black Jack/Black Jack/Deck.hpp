//
//  Deck.hpp
//  Black Jack
//
//  Created by Alex on 1/21/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#ifndef Deck_hpp
#define Deck_hpp

#include <stdio.h>
#include <vector>


#define DECK_SIZE 52
#define RAND_NUM rand() % cards.size()

using namespace std;

class Deck {
private:
    static vector<int> cards;

public:
    Deck();
    int drawCard();
    void reinit();
    int getCardsRemaining();
    void shuffle(const int numOfShuffles = 1);
};

#endif /* Deck_hpp */
