//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: transactions.h
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#if !defined(_TRANSACTIONS_H)
#define _TRANSACTIONS_H

#include <iostream>
#include <string>
#include <iostream>

using namespace std;

class Transactions 
{
private:
	int m_transactionId;
	time_t m_transactionDate;
	double m_transactionAmount;
	string m_transactionType;

public:
	
	int transactionId() { return m_transactionId; }
	time_t transactionDate() { return m_transactionDate; }
	double transactionAmount() { return m_transactionAmount; }
	string transactionType() { return m_transactionType; }
	
	void displayTransaction();
};

#endif  //_TRANSACTIONS_H
