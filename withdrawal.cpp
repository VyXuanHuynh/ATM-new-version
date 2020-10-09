//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: withdrawal.cpp
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#include "withdrawal.h"
#include <iostream>

using namespace std;



void Withdrawal::SetWithdrawalAmount()
{
	cout << "Please enter the amount you want to deposit: " << endl;
	cin >> withdrawalAmount;

	cout << "Your deposit amount is: " << withdrawalAmount << endl;
}



