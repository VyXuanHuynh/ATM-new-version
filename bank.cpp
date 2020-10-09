//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: bank.cpp
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#include "bank.h"
#include <iomanip>

Bank::Bank()
{
	bankId = 0;
	bankName = " ";
	bankAccountNumber = 0;
	bankAccountBalance = 0.0;
}

Bank::Bank(int newCusId, const string newCusName, int newAccNbr, double newAccBalance)
{
	bankId = newCusId;
	bankName = newCusName;
	bankAccountNumber = newAccNbr;
	bankAccountBalance = newAccBalance;
}

void Bank::SetBankId(int newBankId)
{
	bankId = newBankId;
}


void Bank::SetBankName(string newBankName)
{
	bankName = newBankName;
}


void Bank::SetBankAccountNumber(int newBankNumber)
{
	bankAccountNumber = newBankNumber;
}


void Bank::SetBankAccountBalance(double newBankBalance)
{
	bankAccountBalance = newBankBalance;
}

bool operator==(const Bank& b1, const Bank& b2)
{
	return b1== b2;
}

bool operator!=(const Bank& b1, const Bank& b2)
{
	return !(b1==b2);
}

istream& operator>>(istream& istr, Bank& b)
{
	// TODO: insert return statement here
	return istr;
}

ostream& operator<<(ostream& ostr, const Bank& b)
{
	// TODO: insert return statement here
	const streamsize	p1 = 1;
	const streamsize	w1 = 4;
	streamsize			p;

	ostr << fixed;
	p = ostr.precision(p1);
	ostr << "Bank information:" << endl;
	ostr << "Your Customer ID is: " << setw(w1) << b.bankId << endl;
	ostr << "Your Name is: " << setw(w1) << b.bankName << endl;
	ostr << "Your Account Number is: " << setw(w1) << b.bankAccountNumber << endl;
	ostr << "Your Account Balance is: " << setw(w1) << b.bankAccountBalance << endl;

	ostr.precision(p);
	ostr << defaultfloat;
	
	return ostr;
}
