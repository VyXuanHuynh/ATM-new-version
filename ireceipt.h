//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: ireceipt.h
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#if !defined(_IRECEIPT_H)
#define _IRECEIPT_H

#include "receipt.h"

__interface IReceipt
{
public:
	virtual Receipt printDepositReceipt() = 0;
	virtual Receipt printWithdrawalReceipt() = 0;
	virtual Receipt printBalanceReceipt() = 0;
};

#endif  //_IRECEIPT_H
