//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: atm.h
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#if !defined(_ATM_H)
#define _ATM_H

#include "deposit.h"
#include "withdrawal.h"
#include "ireceipt.h"
#include "transactions.h"
#include "balance.h"
#include "bank.h"
#include "card.h"
#include "customer.h"

class ATM
{
private:
	enum options
	{
		deposit,
		withdraw,
		checkBalance,
		exit,
		numberOption
	};
	static const string optionButton[];
	int menu();

public:
	options option;
	void insertCard(Card& card);
	void readCard(Card& card);
	void ejectCard();
	

	void takedeposit(Bank &bank);

	void takewithdraw(Bank& bank);
	void checkbalance(Bank& bank);

	void printreceipt(IReceipt &receipt);

	void printTransaction(Transactions &transaction);
};

#endif  //_ATM_H
