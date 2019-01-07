//
//  main.cpp
//  3.2
//
//  Created by Alex on 1/6/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <iostream>

using namespace std;


//Statistics
//Given list of N numbers, find mean (as a double), max, minimum, and range

int main(int argc, const char * argv[]) {
//Ask for numbers of integers in list
    std::cout << "How many numbers will you enter?" << endl;
    int totalNumbers;
    std::cin >> totalNumbers;
    int numbers[totalNumbers];
    
    double mean = 0;
    int max = 0;
    int min = 0;
    int range= 0;
    
    for(int i = 0; i < totalNumbers; i++) {
        //user will then input N more numbers
        std::cin >> numbers[i];
        
        //Initializes max and min values
        if(i == 0) {
            min = numbers[i];
            max = numbers[i];
        }
        
        // Ensures the max value always holds the max
        if(numbers[i] > max) {
            max = numbers[i];
        }
        //Makes sure the min value always holds the min
        if(numbers[i] < min) {
            min = numbers[i];
        }
        mean += numbers[i];
    }
           mean /= (double) totalNumbers; // note we have to cast otherwise we get a whole number
    range = max - min;
    
    cout << "Mean" << mean << endl;
    cout << "Max" << max << endl;
    cout << "Min" << min << endl;
    cout << "Range" << range << endl;
    
    return 0;
}
