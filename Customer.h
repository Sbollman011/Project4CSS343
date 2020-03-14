#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer {
	friend ostream& operator<<(ostream& output, Customer& nd);	//for testing purposes
public:
	Customer();	//default constructor 
	Customer(int accountNo, string firstName, string lastName); //creates the customer
	virtual ~Customer();	//destructor

	int getAccountNo(); //returns customer account number
	void setAccountNo(int); //sets customer account number
	string getFirstName(); //returns customer first name
	void setFirstName(string); //sets customers first name
	string getLastName(); //returns customer last name
	void setLastName(string); // sets customer last name
	Customer& operator=(const Customer&);	//assignment operator

private:
	int accountNo;	//holds the customer id number
	string firstName;	//holds customer first name
	string lastName;	//holds customer last name

};

#endif // CUSTOMER_H
