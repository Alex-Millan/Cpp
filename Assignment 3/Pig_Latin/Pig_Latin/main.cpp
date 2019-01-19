//
//  main.cpp
//  Pig_Latin
//
//  Created by Alex on 1/18/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <iostream>

using namespace std;

const string VOWELS = {"aeiouy"};

string pigLatinify(string word) {
    if(word.size() == 0) {
        return 0; // empty string
    }
    bool isFirstLetterVowel = false;
    for (int i = 0; i < 6; i++) {
        if(word[0] == VOWELS[i]) {
            isFirstLetterVowel = true;
        }
    }
    const char firstLetter[2] = {' ', word[0]};
    word = &word[1];
    word += firstLetter;
    if(isFirstLetterVowel) {
        word += "way";
    } else {
            word += "ay";
    }
    
    return word;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    string userWord;
    while(1) {
        cout << "Enter your word: ";
        cin >> userWord;
        cout << "Pig latin translation: "  << pigLatinify(userWord) << endl;
    }
    return 0;
}
