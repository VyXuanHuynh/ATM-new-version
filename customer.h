//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: customer.h
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#if !defined(_CUSTOMER_H)
#define _CUSTOMER_H

#include <iostream>
#include <string>

using namespace std;

class Customer
{
private:
	int CustomerId;
	string CustomerName;

public:
	Customer();
	/*~Customer();*/
	Customer(int newCustomerID, string newCustomerName);

	void SetCustomerId(int newCustomerId);
	int GetCustomerId() { return CustomerId; }

	void SetCustomerName(string newCustomerName);
	const string GetCustomerName() const { return CustomerName; }

	friend bool operator ==(const Customer &cus1, const Customer &cus2);
	friend bool operator !=(const Customer &cus1, const Customer &cus2);
	friend istream& operator >>(istream &istr, Customer &cus);
	friend ostream& operator <<(ostream &ostr, const Customer &cus);
};

#endif  //_CUSTOMER_H
