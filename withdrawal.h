//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: withdrawal.h
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#if !defined(_WITHDRAWAL_H)
#define _WITHDRAWAL_H


class Withdrawal
{
private:
	double withdrawalAmount;
public:
	double GetWithdrawalAmount() { return withdrawalAmount; }
	void SetWithdrawalAmount();
};

#endif  //_WITHDRAWAL_H
