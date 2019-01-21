//
//  main.cpp
//  Templates
//
//  Created by Alex on 1/21/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <iostream>
#include <vector>

#define MACRO_MIN(x, y) ((x) < (y)) ? (x) : (y)

using namespace std;

template <typename T>
T findMin(T num1, T num2) {
    return min(num1, num2);
}


template <typename T>
class Stack {
private:
    vector<T> myStack;
public:
    bool empty() {
        return myStack.empty();
    }
    void push(const T &item) {
        myStack.push_back(item);
    }
    T &top() {
        return myStack.back();
    }
    void pop() {
        if(!empty()) {
            myStack.pop_back();
        }
    }
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    double doubleMin = findMin(3.5, 5.7);
    int intMin = findMin((int)2.4, (int)4.6);
    
    int macroInt = MACRO_MIN(6, 16);
    double macroDouble = MACRO_MIN(2.5, 1.9);
    cout << "Min of 3.5 and 5.7 is: " << doubleMin << endl;
    cout << "intMin of 2.4 and 4.6 is: " << intMin << endl;
    cout << "MacroMin of 6 and 16 is: " << macroInt << endl;
    cout << "MacroMin of 2.5 and 1.9 is: " << macroDouble << endl;
    
    // Stacks
    
    cout << endl << endl;
    Stack<int> intStack;
    intStack.push(5);
    intStack.push(6);
    cout << "Top is: " << intStack.top() << endl;
    intStack.pop();
    cout << "New Top is: " << intStack.top() << endl;
    cout << "Is stack empty? " << intStack.empty() << endl;
    intStack.pop();
    cout << "What about now? " << intStack.empty() << endl;
    
    return 0;
}
