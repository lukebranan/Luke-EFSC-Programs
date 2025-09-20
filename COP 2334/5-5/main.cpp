//************************************************************************
// Author: Luke Branan
//
// This program accepts a range of integers and outputs how many numbers
// within that range (inclusive) contain certain factors.
//************************************************************************

#include <iostream>

using namespace std;

// These are the factors that the program searches for.
const int FACTOR_ONE = 3;
const int FACTOR_TWO = 5;

int CountMultiplesInRange(int minNum, int maxNum, int numFactor);

int main() 
{    
    // minNum and maxNum: The range entered by the user
    // swapNum: Used to swap the values of minNum and maxNum
    // multsOfThree/Five: The number of multiples of three and five
    //     in the specified range
    int minNum;
    int maxNum;
    int swapNum;
    int multsOfThree;
    int multsOfFive;
    
    cout << "Enter two integers with a space between them: ";
    cin >> minNum >> maxNum;
    cout << endl;

    // This makes sure that the first number is smaller.
    if (minNum > maxNum)
    {
        swapNum = minNum;
        minNum = maxNum;
        maxNum = swapNum;
    }

    // This finds the multiples of three and five in the specified range.
    multsOfThree = CountMultiplesInRange(minNum, maxNum, FACTOR_ONE);
    multsOfFive = CountMultiplesInRange(minNum, maxNum, FACTOR_TWO);

    cout << "Multiples of three: " << multsOfThree << endl;
    cout << "Multiples of five: " << multsOfFive << endl;

    return 0;
}

/*
 * This function accepts a range of integers and a factor. It returns the
 * number of integers with that factor in the specified range (inclusive).
 */
int CountMultiplesInRange(int minNum, int maxNum, int numFactor)
{
    int numMultiples = 0;
    int numCounter;

    for (numCounter = minNum; numCounter <= maxNum; numCounter++)
    {
        if ((numCounter % numFactor) == 0)
        {
            numMultiples++;
        }
    }

    return numMultiples;
}