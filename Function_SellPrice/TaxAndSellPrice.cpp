/*
In this code, we will get price and tax value from user and then we will calculate sell price for the product

Developer: Barış Someroğlu
Date: 26.03.2024 / 00:30 am
*/


#include <iostream>

using namespace std;

// Function prototype
double TaxAndPrice(double, double);
void SellPrice(double, double);

int main()
{
	double Price, Tax;

	// Getting value from user 
	cout << "Please Enter Price of Product: ";
	cin >> Price;

	cout << "Please Enter Tax for Product: ";
	cin >> Tax;

	cout << "\n";

	// Call the function
	SellPrice(Price, Tax);


	return 0;
}

// Function definition
double TaxAndPrice(double Price, double Tax)
{
	double LastPrice = Price + ((Price * Tax) / 100);

	return LastPrice;
}

// Function definition
void SellPrice(double Price, double Tax)
{
	cout << "Sell Price is: " << TaxAndPrice(Price, Tax) << endl;
}
