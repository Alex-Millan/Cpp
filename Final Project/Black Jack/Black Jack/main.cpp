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

int main(int argc, const char * argv[]) {
    // insert code here...
    Player player1;
    player1.draw();
    player1.draw();
    player1.viewHand();
    
    return 0;
}
