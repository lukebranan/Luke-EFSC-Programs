//**********************************************************************
// Author: Luke Branan
// 
// Program: Number to Char
// This program takes an integer entered by the user and converts it to
// either the equivalent ASCII character or a letter.
//**********************************************************************

#include <iostream>
#include <string>

using namespace std;

// Then minimum and maximum numbers that the user can enter
const int MIN_NUM = 0;
const int MAX_NUM = 35;

// The point at which the program outputs a letter instead of a number
const int MIN_ALPH = 10;

// The ASCII values of 0 and A
const int ASC_ZERO = 48;
const int ASC_A = 65;

int GetNumInRange(int numMin, int numMax);

int main() 
{
    int userInput;
    char outputChar;

    userInput = GetNumInRange(MIN_NUM, MAX_NUM);

    /*
     * If a number less than MIN_ALPH is entered, then the number is
     * converted into the equivalent ASCII character.
     * Otherwise, the number is converted into a letter, where MIN_ALPH
     * is converted to A, MIN_ALPH + 1 is converted to B, and so on.
     */
    if (userInput < MIN_ALPH)
    {
        outputChar = static_cast<char>(userInput + ASC_ZERO);
    }
    else
    {
        outputChar = static_cast<char>(userInput + (ASC_A - MIN_ALPH));
    }

    cout << outputChar << endl;

    return 0;
}

/*
 * This function accepts a minimum and maximum number and asks the user
 * for a number in that range. If the user enters an invalid number, the
 * function simply returns the minimum number.
 */
int GetNumInRange(int numMin, int numMax)
{
    int userInput;

    cout << "Enter an integer between " << numMin << " and " << numMax
         << ": ";
    cin >> userInput;
    cout << endl;

    if ((userInput < numMin) || (userInput > numMax))
    {
        cout << "Invalid number." << endl;

        userInput = numMin;
    }

    return userInput;
}