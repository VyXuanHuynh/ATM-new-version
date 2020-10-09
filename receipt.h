//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: receipt.h
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#if !defined(_RECEIPT_H)
#define _RECEIPT_H


#include <string>
using namespace std;

class Receipt 
{
private:
	int receiptId;
	string receiptName;
	double receiptAmount;

public:
	Receipt();

	Receipt(const string& newName);
	Receipt(int newId, const string& newName, double newAmount);
	
	int id() { return receiptId; }
	const string name() const { return receiptName; }
	double amount() { return receiptAmount; }

	void displayReceipt();

	/*Receipt printDepositReceipt();
	Receipt printWithdrawalReceipt();
	Receipt printBalanceReceipt();
	Receipt printDepositReceipt();
	Receipt printWithdrawalReceipt();
	Receipt printBalanceReceipt();*/
};

#endif  //_RECEIPT_H
