//
//  main.cpp
//  6 Array Operations
//
//  Created by Alex on 1/7/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <iostream>

using namespace std;

const int LENGTH = 2;
const int WIDTH = 3;


//Printing variables shouldn't change the values hence the "const"
void printArray(const int arr[], const int arraySize) {
    for(int i = 0; i < arraySize; i++) {
        if(i != (arraySize - 1)) {
            std::cout << arr[i] << ", ";
        } else {
            std::cout << arr[i] << std::endl;
        }
    }
}

void reverse(int arr[], const int arraySize) {
    int *reverse = &arr[arraySize-1];
    for (int i = 0; i < arraySize/2; i++) {
        int temp = arr[i];
        arr[i] = *(reverse-i);
        arr[arraySize - i - 1] = temp;
    }
}

void printTranspose(const int position[][WIDTH]) {
    for (int i = 0; i < LENGTH; i++) {
        for (int j = 0; j < WIDTH; j++) {
            cout << position[i][j] << ", ";
        }
        cout << endl;
    }
    cout << endl;
}
void printMatrix(const int position[][LENGTH]) {
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < LENGTH; j++) {
            cout << position[i][j] << ", ";
        }
        cout << endl;
    }
    cout << endl;
}
void transpose(const int input[][LENGTH], int output[][WIDTH]) {
    for (int i = 0; i < LENGTH; i++) {
        for (int j = 0; j < WIDTH; j++) {
            output[i][j] = input[j][i];
        }
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //const int size = 3;
    //int myArr[size] = {9,5,7};
    
    //const int size = 4;
    //int myArr[size] = {4, 5, 6, 7};
    
    int position[WIDTH][LENGTH] = {{1,2}, {3,4}, {5, 6}};
    int transposePosition[LENGTH][WIDTH];
    transpose(position, transposePosition);
    printMatrix(position);
    printTranspose(transposePosition);
//
//    printArray(myArr, size);
//    reverse(myArr, size);
//    printArray(myArr, size);
    return 0;
}
