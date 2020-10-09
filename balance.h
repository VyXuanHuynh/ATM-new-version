//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: balance.h
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#if !defined(_BALANCE_H)
#define _BALANCE_H

#include "account.h"
class Balance: public Account
{
private:
	Account balanceAmount;
public:
	/*Account GetBalanceAmount() { return  balanceAmount; }
	void SetBalanceAmount(double balance);*/
	Balance(Account balance);
	void displayBalance();
};

#endif  //_BALANCE_H
