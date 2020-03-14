#ifndef HISTORY_H
#define HISTORY_H

#include "Transactions.h"
#include "CustmerDatabase.h"
#include <iostream>

class History : public Transactions {

public:
	History();	//default constructor
	History(int accountNo);
	//constructor, creates the history object
	//History(char transactionType, char mediaType, Customer* customer);
	 ~History();	//overrides the parent destructor
	//overrides the parent function, executes the history object
	void executeTransactions(CustomerDatabase);
	//prints the history object

	int accountNumber; //holds customers account number
};

#endif // HISTORY_H