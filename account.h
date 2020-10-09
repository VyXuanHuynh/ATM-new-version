//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: account.h
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#if !defined(_ACCOUNT_H)
#define _ACCOUNT_H

#include <iostream>
using namespace std;

class Account
{
private:
	int CustomerId;
	int AccountId;
	int AccountPassword;
	double AccountBalance;

public:
	Account();
	//~Account();

	Account(int newCustomerId, int newAccountId, int newAccountPassword, double newAccountBalance);

	void SetCustomerId(int newCustomerId);
	int GetCustomerId() { return CustomerId; }

	void SetAccountId(int newAccountId);
	int GetAccountId()	{ return AccountId; }

	void SetAccountBalance(double newAccountBalance);
	double GetAccountBalance() { return AccountBalance; }

	void SetAccountPassword(int newAccountPassword);
	int GetAccountPassword() { return AccountPassword; }

	friend bool operator ==(const Account &a1, const Account &a2);
	friend bool operator !=(const Account &a1, const Account &a2);
	friend istream& operator >>(istream &istr, Account &a);
	friend ostream& operator <<(ostream &ostr, const Account &a);
};

#endif  //_ACCOUNT_H
