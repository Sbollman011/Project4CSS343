#include "Transactions.h"
#include <iostream>


Transactions::Transactions()
{
}

Transactions::~Transactions()
{
}

void Transactions::executeTransactions()
{
}

void Transactions::setTransactions(char transactionTypes)
{
}

ostream& operator<<(ostream& output, Transactions& nd)
{
	output << nd.transactionType << " " << nd.mediaType << " " << nd.customer << endl;
	return output;
}
