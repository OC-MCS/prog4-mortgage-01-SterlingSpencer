//////////////////////////////////////////////
// Sterling Spencer
// Programming II
// Professor Harbert
// Due 2/20/19
//////////////////////////////////////////////
#include <iostream>
#include "Mortgage.h"
#include <iomanip>
using namespace std;

int main()
{
	float userLoan, userRate;
	int userYear;
	cout << "What is the loan amount? ";
	cin >> userLoan;
	while (userLoan < 0)
	{
		cout << "Invalid input\n";
		cout << "What is the loan amount? ";
		cin >> userLoan;
	}
	cout << "What is the rate? ";
	cin >> userRate;
	while (userRate < 0)
	{
		cout << "Invalid input\n";
		cout << "What is the rate? ";
		cin >> userRate;
	}
	cout << "For how many years is the loan payment? ";
	cin >> userYear;
	while (userYear < 0)
	{
		cout << "Invalid input\n";
		cout << "For how many years is the loan payment? ";
		cin >> userYear;
	}
	

	Mortgage total(userLoan, userRate, userYear);

	cout << fixed << showpoint << setprecision(2);
	cout << "Monthly Payment: $" << total.getPayment() << endl;
	cout << "Total Payment: $" << total.getTotalPayment() << endl;

	return 0;
}
// main goes here. Code that *uses* the Mortgage class
// goes in this file