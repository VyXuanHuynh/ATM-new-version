//=============================================================================
//	APPLICATION:	atm5
//	MODULE:			main
//	PURPOSE:
//	AUTHOR(S):		Vy Huynh, Kim Nguyen and Arooj Chaudhry
//
//	5/3/2020 7:02:13 PM	Created.
//=============================================================================
#include <iostream>
#include "bank.h"
#include "account.h"
#include "card.h"
#include "customer.h"
#include "balance.h"
#include "deposit.h"
#include "withdrawal.h"
#include "ireceipt.h"
#include "atm.h"
#include "transactions.h"

using namespace std;
//-----------------------------------------------------------------------------
//	THE MAIN ENTRY POINT TO THE PROGRAM.
//
//	input:	argc	The number of arguments of the programme.
//			argv	The vector of arguments of the programme.
//	return:	The code of the reason the process was terminated for.
//			The value defaults to zero.
//-----------------------------------------------------------------------------
int main(int argc, char* argv[])
{
	Bank	bank(1, "Vy", 1234, 300.00);
	//Bank:  Cus ID, Name, Account ID, Balance
	Account account(1, 1234, 1111, 300.00);
	// Account: CusID, AccID, Pass, Balance
	Customer customer(1, "Vy");
	//Customer: Id, Name
	Card card(23456, "Vy", 1111);
	//CardNum, Owner, Pin
	Deposit deposit();
	Balance balance();
	Transactions t;
	

	ATM atm;
	cout << bank << endl;
	cout << account << endl;
	cout << customer << endl;
	cout << card << endl;
	
	atm.insertCard(card);
	atm.printTransaction(t);
	
	




	return 0;
}