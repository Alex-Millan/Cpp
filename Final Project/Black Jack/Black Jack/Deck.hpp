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

using namespace std;

class Deck {
private:
    static vector<int> cards;

public:
    Deck();
    int drawCard();
    void reinit();
    int getCardsRemaining();
};

#endif /* Deck_hpp */
