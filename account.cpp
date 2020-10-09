//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: account.cpp
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#include "account.h"
#include <iomanip>
Account::Account()
{
	CustomerId = 0;
	AccountId = 0;
	AccountPassword = 0;
	AccountBalance = 0.0;
}

//Account::~Account()
//{
//	delete this;
//}

Account::Account(int newCustomerId, int newAccountId, int newAccountPassword, double newAccountBalance)
{
	CustomerId = newCustomerId;
	AccountId = newAccountId;
	AccountPassword = newAccountPassword;
	AccountBalance = newAccountBalance;
}

void Account::SetCustomerId(int newCustomerId)
{
	CustomerId = newCustomerId;
}



void Account::SetAccountId(int newAccountId)
{
	AccountId = newAccountId;
}


void Account::SetAccountBalance(double newAccountBalance)
{
	AccountBalance = newAccountBalance;
}



void Account::SetAccountPassword(int newAccountPassword)
{
	AccountPassword = newAccountPassword;
}



bool operator==(const Account& a1, const Account& a2)
{
	return a1 == a2;
}

bool operator!=(const Account& a1, const Account& a2)
{
	return !(a1 == a2);
}

istream& operator>>(istream& istr, Account& a)
{
	// TODO: insert return statement here
	return istr;
}

ostream& operator<<(ostream& ostr, const Account& a)
{
	// TODO: insert return statement here
	const streamsize	p1 = 1;
	const streamsize	w1 = 4;
	streamsize			p;

	ostr << fixed;
	p = ostr.precision(p1);
	ostr << "Account information:" << endl;
	ostr << "Your Customer ID is: " << setw(w1) << a.CustomerId << endl;
	ostr << "Your Account Number is: " << setw(w1) << a.AccountId << endl;
	ostr << "Your Account Password is: " << setw(w1) << a.AccountPassword << endl;
	ostr << "Your Account Balance is: " << setw(w1) << a.AccountBalance << endl;
	
	ostr.precision(p);
	ostr << defaultfloat;
	return ostr;
}
