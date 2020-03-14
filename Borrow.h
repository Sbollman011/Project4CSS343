#ifndef BORROW_H
#define BORROW_H

#include "Transactions.h"
#include "Customer.h"

using namespace std;

class Borrow :public Transactions {

public:
	Borrow();	//default constructor
	//constructor to create the borrow transaction from the parent class
	Borrow(char transactionType, char mediaType, Customer* customer);
	 ~Borrow();	//destructor
//overrides the parent class executeTransactions class and executes the borrow
	void executeTransactions();

	string borrowComedyTitle;
	int borrowComedyYear;
	string borrowDramaTitle;
	string borrowDramaDirector;
	string borrowClassicActor;
	int borrowClassicMonth;
	int borrowClassicYear;
};

#endif // BORROW_H