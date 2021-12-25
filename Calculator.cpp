#include "Calculator.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Calculator calc;

    int numberOne = calc.firstNum;
    int numberTwo = calc.secondNum;
    char op = calc.methodChoice;
    string choice = "N";

    while (choice == "N" || choice == "n")
    {
        cout << "Enter a: ";
        cin >> numberOne;
        cout << "Enter b: ";
        cin >> numberTwo;
        cout << "Choose the operation:" 
            "\n1. +" 
            "\n2. -" 
            "\n3. *" 
            "\n4. / \n ";
        cin >> op;

        calc.calculate(numberOne, numberTwo, op);

        cout << "Would you like to exit? (Y/N) ";
        cin >> choice;
    }
}