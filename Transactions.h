#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#include "Customer.h"
#include "MovieBST.h"
#include "DramaBST.h"
#include "ComedyBST.h"
#include <string>

using namespace std;

class Transactions {
	friend ostream& operator<<(ostream& output, Transactions& nd);
public:
	Transactions();	//constructor
	virtual ~Transactions();	//destructor
	virtual void executeTransactions();//function to execute transactions, will be overridden by derived classes
	virtual void setTransactions(char transactionTypes);	//sets the transactions


	char transactionType;	//stores the transaction type
	char mediaType;		//stored the media type
	Customer* customer;	//stores a pointer to the customer object
	string borrowTitle;
	int borrowYear;

};

#endif // TRANSACTIONS_H