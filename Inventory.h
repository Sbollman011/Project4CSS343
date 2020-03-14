#ifndef INVENTORY_H
#define INVENTORY_H


#include "Transactions.h"
#include "MovieFactory.h"
#include <string>

using namespace std;

class Inventory :public Transactions {


public:
	Inventory();	//default constructor
	~Inventory();	//overrides the parent destructor
	void executeTransactions(MovieFactory moviefactory); //prints the contents of inventory


};

#endif // INVENTORY_H