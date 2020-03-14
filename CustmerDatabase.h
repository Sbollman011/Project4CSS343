#ifndef CUSTOMER_DATABASE_H
#define CUSTOMER_DATABASE_H
#include "Transactions.h"
#include "Customer.h"
//#include "CustomerFactory.ch"
#include "CustomerFactory.h"

using namespace std;

class CustomerDatabase {

public:
	static const int SIZE = 101; // size of array

	struct TransactionNode
	{
		Transactions* data;
		TransactionNode* next;
	};

	struct ListNode {
		TransactionNode* data;	//holds the transaction data
		Customer* customerInfo;	//stores the customer pointer for the account
		ListNode* next;     //points to the next item in the list

		ListNode(Customer* customerInfo) : customerInfo(customerInfo), data(nullptr), next(nullptr) {}
		ListNode(Customer* customerInfo, ListNode* next) : customerInfo(customerInfo), data(nullptr), next(next) {}
	
	};
	//allows for using ListNode instead of struct ListNode
	using ListNode = struct ListNode;

	ListNode* head;	//holds the head pointer for the list
	ListNode* tail;       //holds the tail of the list to be able to insert more efficiently
	ListNode* array[SIZE];	//each index holds the history of each customer
	
	

	CustomerDatabase();	//constructor
	~CustomerDatabase();	//destructor
		//hashes the customer id number
	int hashFunction(int key);
	int retrieve(int key); // goes to key and prints out list
	bool insert(Customer* customer); // inserts customer into database wit hased key
	void print();

};
#endif // !CUSTOMER_DATABASE_H