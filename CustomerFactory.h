#ifndef CUSTOMER_FACTORY_H
#define CUSTOMER_FACTORY_H
#include "Customer.h"
#include <fstream>
using namespace std;

class CustomerFactory {

public:
	inline CustomerFactory();	//constructor
	inline ~CustomerFactory();	//destructor
	inline void readFile();
//reads the file and creates the customer
	inline void storeCustomer(ifstream& input);

	string firstName, lastName;
	int accountNumber;
};

#endif // CUSTOMER_FACOTRY_H