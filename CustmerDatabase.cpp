#include "CustmerDatabase.h"
#include <iostream>

CustomerDatabase::CustomerDatabase()
{
	for (int i = 0; i < SIZE; ++i) {
		//array[i]->customerInfo = nullptr;
		//array[i]->data = nullptr;
		array[i] = nullptr;
	}
}

CustomerDatabase::~CustomerDatabase()
{
}

int CustomerDatabase::hashFunction(int key)
{
	return (key % SIZE);	//hashes key(id) and returns the hashed value.
}

int CustomerDatabase::retrieve(int key)
{
	//accepts the key
	//finds the customer
	//returns index
	for (int i = 0; i <= SIZE; i++) {
		if (array[i]->customerInfo->getAccountNo() == key) {
			cout << "found index" << endl;
			return i;	//return index of customer
		}
		else {
			return 0;
		}
	}
}

bool CustomerDatabase::insert(Customer* customer)
{

	if (customer == nullptr) {
		return false;
	}
	else {		//if customer != nullptr
		int index = hashFunction(customer->getAccountNo());	//get hashed key
		cout << index << endl;
		if (array[index] == nullptr) {	//if index is empty	
			ListNode *newNode = new ListNode(customer);
			
			array[index] = newNode;		//insert customer
			cout << "customer inserted" << endl;
			return true;
		}
		else{	//if index is taken
			//pushes the previous node down and adds the new node
			ListNode* newNode = new ListNode(customer, array[index]);	
			array[index] = newNode;	//insert customer
			cout << "customer inserted" << endl;
			return true;
		}
	}
}

void CustomerDatabase::print() {
	for (int i = 0; i <= SIZE; i++) {
		cout << *&(array[i]) << endl;
	}
}