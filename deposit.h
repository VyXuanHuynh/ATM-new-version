//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: deposit.h
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#if !defined(_DEPOSIT_H)
#define _DEPOSIT_H


class Deposit
{
private:
	double depositAmount;
public:
	double GetDepositAmount() { return depositAmount; }
	void SetDepositAmount(double deposit);

};

#endif  //_DEPOSIT_H
