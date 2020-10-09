//==============================================================================
// APPLICATION: Final_Project_2
// MODULE: customer.cpp
// PURPOSE:
// AUTHOR: Vy Huynh and Kim Nguyen and Arooj Chaudhry
//
// 05/05/2020 Created
//==============================================================================

#include "customer.h"
#include <iomanip>

Customer::Customer()
{
	CustomerId = 0;
	CustomerName = " ";
}

//Customer::~Customer()
//{
//	CustomerId = 0;
//	CustomerName = " ";
//}

Customer::Customer(int newCustomerID, string newCustomerName)
{
	CustomerId = newCustomerID;
	CustomerName = newCustomerName;
}

void Customer::SetCustomerId(int newCustomerId)
{
	CustomerId = newCustomerId;
}


void Customer::SetCustomerName(string newCustomerName)
{
	CustomerName = newCustomerName;
}

bool operator==(const Customer& cus1, const Customer& cus2)
{
	return cus1 == cus2;
}

bool operator!=(const Customer& cus1, const Customer& cus2)
{
	return !(cus1 == cus2);
}

istream& operator>>(istream& istr, Customer& cus)
{
	// TODO: insert return statement here
	return istr;

}

ostream& operator<<(ostream& ostr, const Customer& cus)
{
	// TODO: insert return statement here
	const streamsize	p1 = 1;
	const streamsize	w1 = 4;
	streamsize			p;

	ostr << fixed;
	p = ostr.precision(p1);
	ostr << "Customer information:" << endl;
	ostr << "Your Customer ID is: " << setw(w1) << cus.CustomerId << endl;
	ostr << "Acrd Customer Name is: " << setw(w1) << cus.CustomerName << endl;
	


	ostr.precision(p);
	ostr << defaultfloat;
	return ostr;
}
