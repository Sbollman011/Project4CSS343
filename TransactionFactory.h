#ifndef TRANSACTION_FACTORY_H
#define TRANSACTION_FACTORY_H

#include <fstream>
#include <queue>
#include <iostream>
#include "Movie.h"
#include "Transactions.h"
#include "CustomerFactory.h"
#include "Borrow.h"
#include "Return.h"
#include "Inventory.h"
#include "History.h"


using namespace std;

class TransactionFactory {

public:
	inline TransactionFactory();		//constructor
	inline ~TransactionFactory();	//destructor
	void readFile();
	inline bool storeTransaction(ifstream& input);	//reads the file and calls make function
	virtual Transactions* makeTransaction(char transactionType, char movieType);//takes in the transaction type and creates the correct transaction
	void processQueue(MovieFactory moviefactory,CustomerDatabase cd);

	//stores the transactions as they are read from the file
	queue<Transactions> transactionQueue;

	char transactionType, mediaType, movieType;	//stores the transaction, media, and movietype			
	string accountNumberS, mediaTypeS, movieTitle, releaseDateS, classicReleaseMonthS,
		classicReleaseYearS, cActorFname, cActorLname, actor, director;
	//stores account number, mediatype movie title, director and release date as strings
	//some will be converted to other data

	int accountNumber, releaseDate, classicReleaseYear, classicReleaseMonth; //stores customer account,
		//releaseDate, classicReleaseYear, classic release Month

	Movie* transactionMovie;
};

#endif // TRANSACTION_FACTORY_H