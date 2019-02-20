#pragma once
#ifndef MORTGAGE_H
#define MORTGAGE_H
// header file for Mortgage class

class Mortgage
{
	private:
		float loan;
		float rate;
		int years;
	public:
		Mortgage(float, float, int);
		float getPayment() const;
		float getTotalPayment() const;
};

#endif