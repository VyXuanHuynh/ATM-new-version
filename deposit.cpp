//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: deposit.cpp
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#include "deposit.h"
#include "account.h"
#include "bank.h"
#include <iostream>

using namespace std;


void Deposit::SetDepositAmount(double deposit)
{
	cout << " Please enter the Amount you want to deposit: " << endl;
	cin >> deposit;
	cout << "You have deposit: " << deposit << " into your account." << endl;
	
}
