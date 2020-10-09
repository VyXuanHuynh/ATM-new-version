//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: balance.cpp
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#include "balance.h"
#include <iostream>

using namespace std;



//void Balance::SetBalanceAmount(double balance)
//{
//	balanceAmount = balance;
//	cout << "Your Balance is: " << balanceAmount << endl;
//
//}



Balance::Balance(Account balance)
{
	balanceAmount = balance;
}

void Balance::displayBalance()
{
	cout << "Your Balance is:" << balanceAmount << endl;
}
