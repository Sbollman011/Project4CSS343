#include "Customer.h"
#include <iostream>

using namespace std;

Customer::Customer() //default constructor
{

}

Customer::Customer(int thisAccountNo, string thisFirstName, string thisLastName) { // creates customer
	accountNo = thisAccountNo;
	firstName = thisFirstName;
	lastName = thisLastName;
}

Customer::~Customer() //destructor
{

}

int Customer::getAccountNo() { //returns customer account number
	return accountNo;
}

void Customer::setAccountNo(int thisAccountNo) { //sets customer account number
	accountNo = thisAccountNo;
}

string Customer::getFirstName() {  //returns customer first name
	return firstName;
}

void Customer::setFirstName(string thisFirstName) { //set customers first name
	firstName = thisFirstName;
}

string Customer::getLastName() { //returns customers last name
	return lastName;
}

void Customer::setLastName(string thisLastName) { //sets customer last name
	lastName = thisLastName;
}

ostream& operator<<(ostream& output, Customer& nd) {
	output << nd.accountNo << ", " << nd.firstName << ", " <<
		nd.lastName << endl;
	return output;
}