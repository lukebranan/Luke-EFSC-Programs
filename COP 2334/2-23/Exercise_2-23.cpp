// A program that calculates profits on stocks
// Name: Luke Branan
// Date: 8/29/2025

#include <iostream>

using namespace std;

const double SERVICE_CHARGE = 1.5;

int main() 
{
    // Declaring variables
    double buyingPrice;
    double sellingPrice;
    int numShares;
    double amountInvested;
    double amountRecieved;
    double investCharge;
    double recieveCharge;
    double totalCharges;
    double profit;

    // User input
    cout << "Enter the buying price of each share: ";
    cin >> buyingPrice;
    cout << endl;

    cout << "Enter the selling price of each share: ";
    cin >> sellingPrice;
    cout << endl;

    cout << "Enter the number of shares sold: ";
    cin >> numShares;
    cout << endl;

    // Calculating the amount invested and recieved
    amountInvested = buyingPrice * numShares;
    amountRecieved = sellingPrice * numShares;

    // Calculating the service charges
    investCharge = amountInvested * (SERVICE_CHARGE / 100);
    recieveCharge = amountRecieved * (SERVICE_CHARGE / 100);

    // Updating amounts to account for service charges
    amountInvested += investCharge;
    amountRecieved -= recieveCharge;

    // Calculating total service charges
    totalCharges = investCharge + recieveCharge;

    // Calculating total profit
    profit = amountRecieved - amountInvested;

    // Output to user
    cout << "Total amount invested: $ " << amountInvested << endl;
    cout << "Total amount recieved: $ " << amountRecieved << endl;
    cout << "Total service charges: $ " << totalCharges << endl;
    cout << "Amount gained or lost: $" << profit << endl;

    return 0;
}