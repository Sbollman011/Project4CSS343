#include "CustomerFactory.h"
#include "Customer.h"
#include <string>
#include <iostream>
#include "CustmerDatabase.h"


CustomerFactory::CustomerFactory(){}

CustomerFactory::~CustomerFactory(){}

void CustomerFactory::readFile()
{
	ifstream input("data4customers.txt");
	storeCustomer(input);
}

void CustomerFactory::storeCustomer(ifstream& input)
{
	CustomerDatabase cdb;
	while (!input.eof()) {	//checks to see if at end of file
		input >> accountNumber;			//reads customer account number
		if (accountNumber) {		//if account number
			input >> lastName;
			input >> firstName;
			Customer c = Customer(accountNumber, firstName, lastName);		//creates the customer object
			cout << c.getAccountNo() << " " << c.getFirstName() << " " << c.getLastName() << endl;
			cdb.insert(&c);
		}
		else {	//if incorrect formatting
			cout << "Incorrect input formatting" << endl;
		}
	}//end while loop
	input.close();
}
