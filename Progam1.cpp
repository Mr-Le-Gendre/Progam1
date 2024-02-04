// Progam1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main() {
    double originalPrice, markupPercentage, salesTaxRate;

    cout << "Enter original price: $";
    cin >> originalPrice;

    cout << "Enter markup percentage: ";
    cin >> markupPercentage;

    cout << "Enter sales tax rate: ";
    cin >> salesTaxRate;

    double markupAmount = (markupPercentage / 100) * originalPrice;
    double sellingPrice = originalPrice + markupAmount;
    double salesTax = (salesTaxRate / 100) * sellingPrice;
    double finalPrice = sellingPrice + salesTax;

    cout << "\n--- Receipt ---\n";
    cout << "Original Price: $" << originalPrice << endl;
    cout << "Markup Percentage: " << markupPercentage << "%" << endl;
    cout << "Selling Price: $" << sellingPrice << endl;
    cout << "Sales Tax: $" << salesTax << endl;
    cout << "Final Price (with tax): $" << finalPrice << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
