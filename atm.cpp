//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: atm.cpp
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#include "atm.h"
#include "deposit.h"
#include "withdrawal.h"
#include "balance.h"
#include "ireceipt.h"
#include "transactions.h"
#include "card.h"
#include "bank.h"
#include "customer.h"
#include "account.h"
#include <iomanip>
#include <queue>
const string ATM::optionButton[numberOption] = { "Deposit", "Withdraw" ,"Check Balance" , "Exit" };

int ATM::menu() 
{
	const string MenuList(" Select your options: ");
	int optn = -1;
	cout << "You select to: " << endl;
	for (int i = 0; i < options::numberOption; i++)
	{
		cout << setw(MenuList.length()) << i + 1 << "." << optionButton[i] << endl;
	}

	cout << MenuList << ": ";
	cin >> optn;
	return optn - 1;
}

void ATM::insertCard(Card& card)
{
	bool insert = false;
	string choice;
	cout << "Do you want to insert card? yes/no" << endl;
	cin >> choice;

	if (choice == "yes" || choice == "Yes" || choice == "y" || choice == "Y")
	{
		insert = true;
		while (insert == true) {
			readCard(card);
		}
	}
	else if (choice == "no" || choice == "No" || choice == "n" || choice == "N")
	{
		cout << " You are not insert card! Plese insert card to continue!" << endl;
		insert == false;
	}
	else {
		cout << "Please choose yes or no!" << endl;
	}
	
}

void ATM::readCard(Card& card)
{
	Bank	bank(1, "Vy", 1234, 300.00);
	//Bank:  Cus ID, Name, Account ID, Balance
	//Account account(1, 1234, 1111, 300.00);
	// Account: CusID, AccID, Pass, Balance
	Customer customer(1, "Vy");
	//Customer: Id, Name
	//Card card(23456, "Vy", 1111);
	////CardNum, Owner, Pin
	Receipt r;
	int cardNumber;
	int cardPin;
	cout << "Please enter your card number:" << endl;
	cin >> cardNumber;
	cout << "Please enter your card pin:" << endl;
	cin >> cardPin;
	

		if (cardNumber == card.getCardNubr() && cardPin == card.getCardPin())
		{
		
			cout << "Your Card Number and Pin are correct." << endl;
			//menu();
			/*enum options
			{
				deposit,
				withdraw,
				checkBalance,
				exit,
				numberOption
			}*/

			switch (menu())
			{
			case deposit:
				takedeposit(bank);

				r.displayReceipt();

				break;
			case withdraw:
				takewithdraw(bank);
				break;
			case checkBalance:
				checkbalance(bank);
				break;

			case exit:
				string m_choice;
				cout << " do you want to do another transfer? y/n" << endl;
				cin >> m_choice;
				if (m_choice == "yes" || m_choice == "yes" || m_choice == "y" || m_choice == "y")
				{
					readCard(card);
				}
				else if (m_choice == "no" || m_choice == "no" || m_choice == "n" || m_choice == "n")
				{
					cout << "thank you for use atm!" << endl;
					ejectCard();
					
				}
				else { cout << "please choose yes or no!" << endl; }
				
				
			}

		}

		else {
			cout << "Your Card Number and Pin are incorrect! Please enter again" << endl;
		}
	}


void ATM::ejectCard()
{
	
		string m_choice;
		cout << "Do you want to eject the card?" << endl;
		cin >> m_choice;

		if (m_choice == "yes" || m_choice == "Yes" || m_choice == "y" || m_choice == "Y")
		{
			cout << " Your card is ejected!" << endl;

		}
		else if (m_choice == "no" || m_choice == "No" || m_choice == "n" || m_choice == "N")
		{
			option = options::numberOption;
			
		}
		else {
			cout << "Please choose yes or no!" << endl;
		}
	
	
}



void ATM::takedeposit( Bank &bank)
{

	double currentbalance = bank.GetBankAccountBalance();
	double amount;
	cout << "Please enter the amount you want to deposit: " << endl;
	cin >> amount;
	currentbalance += amount;

	cout << "Your new balance is: " << currentbalance << endl;
	bank.SetBankAccountBalance(currentbalance);
	
}

void ATM::takewithdraw(Bank& bank)
{
	Deposit d;
	double currentbalance = bank.GetBankAccountBalance();
	double amount = d.GetDepositAmount();

	cout << "Please enter the amount you want to withdraw: " << endl;
	cin >> amount;

	if (amount <= currentbalance && amount > 0)
	{
		currentbalance -= amount;

		cout << "Your new balance is: " << currentbalance << endl;
		bank.SetBankAccountBalance(currentbalance);
		
	}
	else 
	{
		cout << "You don't have enough money in account" << endl;
	}
	
}

void ATM::checkbalance(Bank& bank)
{
	double currentbalance = bank.GetBankAccountBalance();
	cout << "Your current balance is: " << currentbalance << endl;
	
}

void ATM::printreceipt(IReceipt &receipt)
{
	Receipt r;
	for (;;) {
		switch (menu()) {
		case options::deposit:
			r = receipt.printDepositReceipt();
			break;
		case options::checkBalance:
			r = receipt.printBalanceReceipt();
			break;
		case options::withdraw:
			r = receipt.printWithdrawalReceipt();
			break;
		case options::exit:
			return;
		}

		cout << r.id() << endl;
		cout << r.name() << endl;
		cout << r.amount() << endl;
		
		
		}
	}


void ATM::printTransaction(Transactions &transaction)
{

	queue <Transactions> q1;
	q1.push(transaction);
	q1.push(transaction);
	q1.push(transaction);
	q1.push(transaction);
	q1.push(transaction);

	q1.front();



}

