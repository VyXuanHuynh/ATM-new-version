//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: receipt.cpp
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#include "receipt.h"
#include "receipt.h"
#include <iostream>
#include <string>

using namespace std;


Receipt::Receipt()
{
	receiptId = 0;
	receiptName = " ";
	receiptAmount = 0.0;
}



Receipt::Receipt(const string& newName)
{
	receiptName = newName;
}

Receipt::Receipt(int newId, const string& newName, double newAmount)
	: receiptId(newId), receiptName(newName), receiptAmount(newAmount)
{
}


void Receipt::displayReceipt()
{
	cout << "Receipt for your transaction: " << endl;
}

//Receipt Receipt::printDepositReceipt()
//{
//
//}
//
//Receipt Receipt::printWithdrawalReceipt()
//{
//}
//
//Receipt Receipt::printBalanceReceipt()
//{
//}
//
//Receipt Receipt::printDepositReceipt()
//{
//}
//
//Receipt Receipt::printWithdrawalReceipt()
//{
//}
//
//Receipt Receipt::printBalanceReceipt()
//{
//}

