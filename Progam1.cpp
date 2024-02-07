// Progam1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main() {
    double originalPrice, markupPercentage, salesTaxRate;  // User inputs: originalPrice, markupPercentage, salesTaxRate

    cout << "Enter original price: $";
    cin >> originalPrice;  // User inputs: originalPrice

    cout << "Enter markup percentage: ";
    cin >> markupPercentage;  // User inputs: markupPercentage

    cout << "Enter sales tax rate: ";
    cin >> salesTaxRate;  // User inputs: salesTaxRate

    // Processing notes:
    // 1. Read originalPrice, markupPercentage, and salesTaxRate from user input.
    // 2. Calculate markup amount using the formula: markupAmount = (markupPercentage / 100) * originalPrice.
    // 3. Calculate selling price by adding markup amount to original price.
    // 4. Calculate sales tax using the formula: salesTax = (salesTaxRate / 100) * sellingPrice.
    // 5. Calculate final price by adding selling price and sales tax.

    double markupAmount = (markupPercentage / 100) * originalPrice;  // Supplied constant: markupAmount
    double sellingPrice = originalPrice + markupAmount;  // Supplied constant: sellingPrice
    double salesTax = (salesTaxRate / 100) * sellingPrice;  // Supplied constant: salesTax
    double finalPrice = sellingPrice + salesTax;  // Supplied constant: finalPrice

    cout << "\n--- Receipt ---\n";
    cout << "original_Price: $" << originalPrice << endl;
    cout << "markup_Percentage: " << markupPercentage << "%" << endl;
    cout << "selling_Price: $" << sellingPrice << endl;
    cout << "sales_Tax: $" << salesTax << endl;
    cout << "final_Price (with tax): $" << finalPrice << endl;

    return 0;
}
