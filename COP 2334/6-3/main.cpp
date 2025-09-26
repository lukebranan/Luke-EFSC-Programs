//***************************************************************************
// Author: Luke Branan
// 
// This program accepts one line of characters from the user and outputs
// the number of vowels in the input. (Y is not counted as a vowel.)
//***************************************************************************

#include <iostream>

using namespace std;

/* 
 * STOP_CHAR is the character that makes the computer stop reading data
 * from the user.
 */
const char STOP_CHAR = '\n';

bool isVowel(char inputChar);

int main() 
{
    /*
     * The characters that are entered by the user are placed into inputChar
     * one at a time.
     * numVowels is used to count the number of vowels in the user's input.
     */
    char inputChar;
    int numVowels = 0;

    cout << "Enter a sequence of characters and then press enter: ";

    cin.get(inputChar);

    // This while loop continues until it reaches a newline character.
    while (inputChar != STOP_CHAR)
    {
        // If inputChar is a vowel, this increments numVowels by 1.
        if (isVowel(inputChar))
        {
            numVowels++;
        }

        cin.get(inputChar);
    }

    cout << endl;

    cout << "There are " << numVowels << " vowels in this sentence." << endl;

    return 0;
}

/*
 * This function accepts a char. It returns true if the char is a vowel or
 * false if the char is not a vowel. (Y is not counted as a vowel.)
 */
bool isVowel(char inputChar)
{
    bool vowelFlag;

    switch(inputChar)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowelFlag = true;
            break;
        default:
            vowelFlag = false;
    }

    return vowelFlag;
}