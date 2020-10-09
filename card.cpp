//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: card.cpp
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#include "card.h"
#include <iostream>
#include<string>
#include <iomanip>

using namespace std;

Card::Card()
{
	OwnerName = " ";
	CardNumber = 0;
	CardPin = 0;

}

//Card::~Card()
//{
//	
//	OwnerName = " ";
//	CardNumber = 0;
//	CardPin = 0;
//}

Card::Card(int newCardNumber, string newCardOwner, int newCardPin)
{
	CardNumber = newCardNumber;
	OwnerName = newCardOwner;
	CardPin = newCardPin;
}



void Card::add(int newCardNumber, string newOwnerName, int newPin)
{
	cout << "Enter your card Number:" << endl;
	cin >> newCardNumber;
	CardNumber = newCardNumber;
	cout << "Enter your card Owner: " << endl;
	cin >> newOwnerName;
	OwnerName = newOwnerName;
	cout << "Enter your card Pin: " << endl;
	cin >> newPin;
	CardPin = newPin;
	
}

void Card::remove(int newCardNumber, string newOwnerName, int newPin)
{
	newCardNumber = 0;
	CardNumber = newCardNumber;
	newOwnerName = " ";
	OwnerName = newOwnerName;
	newPin = 0;
	CardPin = newPin;
	
}

void Card::update(int newCardNumber, string newOwnerName, int newPin)
{
	cout << "Enter your card Number:" << endl;
	cin >> newCardNumber;
	CardNumber = newCardNumber;
	cout << "Enter your card Owner: " << endl;
	cin >> newOwnerName;
	OwnerName = newOwnerName;
	cout << "Enter your card Pin: " << endl;
	cin >> newPin;
	CardPin = newPin;
}



void Card::SetCardOwner(string newCardOwner)
{
	OwnerName = newCardOwner;
}

void Card::SetCardNubr(int newCardNum)
{
	CardNumber = newCardNum;
}

void Card::SetCardPin(int newPin)
{
	CardPin = newPin;
}

bool operator==(const Card& c1, const Card& c2)
{
	return c1==c2;
}

bool operator!=(const Card& c1, const Card& c2)
{
	return !(c1 == c2);
}

istream& operator>>(istream& istr, Card& c)
{
	// TODO: insert return statement here
	return istr;
}

ostream& operator<<(ostream& ostr, const Card& c)
{
	// TODO: insert return statement here
	const streamsize	p1 = 1;
	const streamsize	w1 = 4;
	streamsize			p;

	ostr << fixed;
	p = ostr.precision(p1);
	ostr << "Card information:" << endl;
	ostr << "Your Card Number is: " << setw(w1) << c.CardNumber << endl;
	ostr << "Acrd Owner's Name is: " << setw(w1) << c.OwnerName << endl;
	ostr << "Your Card Pin is: " << setw(w1) << c.CardPin << endl;
	

	ostr.precision(p);
	ostr << defaultfloat;
	return ostr;
}
