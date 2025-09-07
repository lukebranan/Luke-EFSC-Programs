//****************************************************************************
// Author: Luke Branan
// 
// Program: Pay Raise Calculator
// This program accepts a file containing the first name, last name, current
// salary, and pay increase percentage for several employees. Then, it creates
// a file called Ch3_Ex5Output.dat that includes the first name, last name,
// and new salary for each employee.
//****************************************************************************

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int NUM_EMPLOYEES = 3;

int main() 
{
    // Creating variables
    string lastNames[NUM_EMPLOYEES];
    string firstNames[NUM_EMPLOYEES];
    double salaries[NUM_EMPLOYEES];
    double payRaise[NUM_EMPLOYEES];
    double newSalaries[NUM_EMPLOYEES];
    string inputFileName;
    ifstream inFile;
    ofstream outFile;

    // Asking the user for the name of the input file
    cout << "Enter file name: ";
    cin >> inputFileName;
    cout << endl;

    // Letting the user know that something is happening
    cout << "Processing data..." << endl;

    // Opening the files
    inFile.open(inputFileName);
    outFile.open("Ch3_Ex5Output.dat");

    // Reading the input file
    for (int employee = 0; employee < NUM_EMPLOYEES; employee++)
    {
        inFile >> lastNames[employee];
        inFile >> firstNames[employee];
        inFile >> salaries[employee];
        inFile >> payRaise[employee];

        // Calculating the new salary for the employee
        newSalaries[employee] = salaries[employee] * (payRaise[employee] + 100) / 100;
    }

    // Formatting the output
    outFile << fixed << showpoint;
    outFile << setprecision(2);

    // Creating the output file
    for (int employee = 0; employee < NUM_EMPLOYEES; employee++)
    {
        outFile << firstNames[employee] << " ";
        outFile << lastNames[employee] << " ";
        outFile << newSalaries[employee] << endl;
    }

    // Closing the files
    inFile.close();
    outFile.close();

    // Letting the user know that the program has finished successfully
    cout << "Done!" << endl;

    return 0;
}
