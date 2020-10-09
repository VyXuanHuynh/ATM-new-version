//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: transactions.cpp
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#include "transactions.h"




void Transactions::displayTransaction()
{
	cout << "Transaction ID: " << m_transactionId << endl;
	cout << "Transaction  Date:" << m_transactionDate << endl;
	cout << "Transaction Ammount: " << m_transactionAmount << endl;
	cout << "Transaction Type: " << m_transactionType << endl;

}
