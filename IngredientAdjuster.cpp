// IngredientAdjuster.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
File name: IngredientAdjuster.cpp 
Programmer: Ozair Ghaissi
Date: 11/08/2024
*/

#include <iostream>
using namespace std;

int main() {
    const double sugar = 1.5 / 48;
    const double butter = 1.0 / 48;
    const double flour = 2.75 / 48;

    int cookies;
    cout << "Enter the number of cookies you want to make: ";
    cin >> cookies;

    cout << "To make " << cookies << " cookies, you will need:\n";
    cout << (sugar * cookies) << " cups of sugar\n";
    cout << (butter * cookies) << " cups of butter\n";
    cout << (flour * cookies) << " cups of flour\n";

    return 0;
}