#include <iostream>
#include "Mortgage.h"
#include <cstdlib>
using namespace std;
// implementation file for Mortgage class

//////////////////////////////////////////
// Purpose: Assigns the amounts for loan, rate, and years.
// Parameters: Loan amount, rate amount, and years amount
//////////////////////////////////////////
Mortgage::Mortgage(float lo, float ra, int ye)
{
	loan = lo;
	rate = ra;
	years = ye;
}

/////////////////////////////////////////////////
// Purpose: Returns the monthly payment to main.
// Parameters: None
// Returns: Monthly payment
/////////////////////////////////////////////////
float Mortgage::getPayment() const
{
	return ((loan * (rate/12) * (pow((1 + (rate / 12)), (12 * years))) / ((pow((1 + (rate / 12)), (12 * years)) - 1))));
}

/////////////////////////////////////////////////
// Purpose: Returns the total payment to main.
// Parameters: None
// Returns: Total payment
/////////////////////////////////////////////////
float Mortgage::getTotalPayment() const
{
	return (12 * years * ((loan * (rate / 12) * (pow((1 + (rate / 12)), (12 * years))) / ((pow((1 + (rate / 12)), (12 * years)) - 1)))));
}

