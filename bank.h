//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: bank.h
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#if !defined(_BANK_H)
#define _BANK_H
#include <string>
#include <iostream>

using namespace std;


class Bank
{
private:
	int bankId;
	string bankName;
	int bankAccountNumber;
	double bankAccountBalance;
	
public:
	Bank();
	Bank(int newCusId, const string newCusName, int newAccNbr, double newAccBalance);

	void SetBankId(int newBankId);
	int GetBankId() { return bankId; }

	void SetBankName(string newBankName);
	const string GetBankName()const { return bankName; }

	void SetBankAccountNumber(int newBankNumber);
	int GetBankAccountNumber() { return bankAccountNumber; }

	void SetBankAccountBalance(double newBankBalance);
	double GetBankAccountBalance() { return bankAccountBalance; }

	friend bool operator ==(const Bank &b1, const Bank &b2);
	friend bool operator !=(const Bank &b1, const Bank &b2);
	friend istream& operator >>(istream &istr, Bank &b);
	friend ostream& operator <<(ostream &ostr, const Bank &b);
};

#endif  //_BANK_H
