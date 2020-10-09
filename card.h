//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: card.h
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#if !defined(_CARD_H)
#define _CARD_H
#include <iostream>
#include <string>
using namespace std;

class Card
{
private:
	int CardNumber;
	string OwnerName;
	int CardPin;\

public:
	Card();
	//~Card();
	Card(int newCardNumber, string newCardOwner, int newCardPin);

	void add(int newCardNumber, string newOwnerName, int newPin);
	void remove(int newCardNumber, string newOwnerName, int newPin);
	void update(int newCardNumber, string newOwnerName, int newPin);

	int getCardNubr() { return CardNumber; }
	const string getOwnerName() const { return OwnerName; }
	int getCardPin() { return CardPin; }
	
	void SetCardOwner(string newCardOwner);
	void SetCardNubr(int newCardNum);
	void SetCardPin(int newPin);
	

	

	friend bool operator ==(const  Card &c1, const  Card &c2);
	friend bool operator !=(const  Card &c1, const  Card &c2);
	friend istream& operator >>(istream &istr, Card &c);
	friend ostream& operator <<(ostream &ostr, const Card &c);
};

#endif  //_CARD_H
