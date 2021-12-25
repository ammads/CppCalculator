#pragma once
#ifndef Calculator_hpp
#define Calculator_hpp

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Calculator {

public:
    Calculator()
    {
        methodChoice;
        firstNum = 0.00;
        secondNum = 0.00;
        resultNum = 0.00;
    }
    char methodChoice;
    float firstNum;
    float secondNum;
    float resultNum;

    void calculate(int firstNum, int secondNum, char methodChoice)
    {
        switch (methodChoice) {
        case '+':
            resultNum = firstNum + secondNum;
            break;
        case '-':
            resultNum = firstNum - secondNum;
            break;
        case '*':
            resultNum = firstNum * secondNum;
            break;
        case '/':
            resultNum = firstNum / secondNum;
            break;
        default:
            cout << "You are a dumbass" << std::endl;
            break;
        }
        cout << resultNum << std::endl;
    }
};

#endif