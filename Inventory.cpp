#include "Inventory.h"

Inventory::Inventory()
{
}

/*Inventory::Inventory(char transactionType, char mediaType, Customer* customer)
{
	this->transactionType = transactionType;
	this->mediaType = mediaType;
	this->customer = customer;
}*/

Inventory::~Inventory()
{
}

void Inventory::executeTransactions(MovieFactory moviefactory)
{
	ClassicBST classicBST = moviefactory.getClassicBST();
	ComedyBST comedyBST = moviefactory.getComedyBST();
	DramaBST dramaBST = moviefactory.getDramaBST();

	comedyBST.printTree();
	dramaBST.printTree();
	classicBST.printTree();
	
}
