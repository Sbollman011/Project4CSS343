#include "History.h"

History::History()
{
}
History::History(int accountNumber) {  //constructor with customer account number
	this->accountNumber = accountNumber;
}

History::~History()
{
}
 
void History::executeTransactions(CustomerDatabase cd) //returns history of customer transactions and customer info
{
	Customer* thisCustomer = cd.array[cd.hashFunction(accountNumber)]->customerInfo;
	cout << thisCustomer << endl;
	 while (cd.array[cd.hashFunction(accountNumber)]->data != nullptr) {

		 Transactions* thisTransaction = cd.array[cd.hashFunction(accountNumber)]->data->data;
		 cout << thisTransaction << endl;
	}
}
