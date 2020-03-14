#include "TransactionFactory.h"



TransactionFactory::TransactionFactory() {} //constructor

TransactionFactory::~TransactionFactory() {} //destructor


void TransactionFactory::readFile()
{
	ifstream input("data4commands.txt");
	storeTransaction(input);
}

bool TransactionFactory::storeTransaction(ifstream& input) { //reads the file and calls make function
	while (!input.eof()) {	//checks to see if at end of file
		input >> transactionType;    //reads customer account number
		if (transactionType == 'I') {
			cout << "Inventory command" << endl;
			transactionQueue.push(*makeTransaction('I', NULL));
			return true;
		}
		if (transactionType == 'H') {
			getline(input, accountNumberS);
			accountNumber = stoi(accountNumberS);
			cout << "History command" << endl;
			transactionQueue.push(*makeTransaction('H', NULL));
			return true;
		}
		if (transactionType == 'B') {
			getline(input, accountNumberS, ' ');
			getline(input, mediaTypeS, ' ');

			input >> movieType;

			if (movieType == 'F') {
				getline(input, movieTitle, ',');
				getline(input, releaseDateS, ' ');
				releaseDate = stoi(releaseDateS);
				cout << "borrow comedy" << endl;
				transactionQueue.push(*makeTransaction('B', 'F'));
				return true;
			}

			if (movieType == 'D') {
				getline(input, director, ',');
				getline(input, movieTitle, ',');
				cout << "borrow drama" << endl;
				transactionQueue.push(*makeTransaction('B', 'D'));
				return true;
			}

			if (movieType == 'C') {
				getline(input, classicReleaseMonthS, ' ');	//reads release month
				getline(input, classicReleaseYearS, ' '); //reads release year
				getline(input, cActorFname, ' ');	//reads actor Fname
				getline(input, cActorLname, ' ');  //read actor Lname
				classicReleaseMonth = stoi(classicReleaseMonthS);
				classicReleaseYear = stoi(classicReleaseYearS);
				actor = cActorFname + " " + cActorLname;
				cout << "borrow classic" << endl;
				transactionQueue.push(*makeTransaction('B', 'C'));
				return true;
			}

			else {
				cout << "Invalid Format";
				return false;
			}
		}

		if (transactionType == 'R') {
			getline(input, accountNumberS, ' ');
			getline(input, mediaTypeS, ' ');

			input >> movieType;

			if (movieType == 'F') {
				getline(input, movieTitle, ',');
				getline(input, releaseDateS, ' ');
				releaseDate = stoi(releaseDateS);
				cout << "return comedy" << endl;
				transactionQueue.push(*makeTransaction('R', 'F'));
				return true;
			}

			if (movieType == 'D') {
				getline(input, director, ',');
				getline(input, movieTitle, ',');
				cout << "return drama" << endl;
				transactionQueue.push(*makeTransaction('R', 'D'));
				return true;
			}

			if (movieType == 'C') {
				getline(input, classicReleaseMonthS, ' ');	//reads release month
				getline(input, classicReleaseYearS, ' '); //reads release year
				getline(input, cActorFname, ' ');	//reads actor Fname
				getline(input, cActorLname, ' ');  //read actor Lname
				classicReleaseMonth = stoi(classicReleaseMonthS);
				classicReleaseYear = stoi(classicReleaseYearS);
				actor = cActorFname + " " + cActorLname;
				cout << "return classic" << endl;
				transactionQueue.push(*makeTransaction('R', 'C'));
				return true;
			}

			else {
				cout << "Invalid Format";
				return false;
			}


		}
		else {	//if incorrect formatting
			cout << "Incorrect input formatting" << endl;
			return false;
		}
	}//end while loop
	input.close();
}

Transactions* TransactionFactory::makeTransaction(char transactionType, char movieType) //takes in the transaction type and creates the correct transaction
{

	if (transactionType == 'I' && movieType == NULL) {

		Transactions* inventory = new Inventory();
		return inventory;
	}
	else if (transactionType == 'H' && movieType == NULL) {
		Transactions* history = new History(accountNumber);
		return history;
	}
	else if (transactionType == 'B' && movieType == 'F') {
		Transactions* borrow = new Borrow();
		borrow->borrowTitle = movieTitle;
		borrow->borrowYear = releaseDate;
		return borrow;
	}
	else if (transactionType == 'B' && movieType == 'D') {
		Transactions* borrow = new Borrow();
		borrow->borrowTitle = movieTitle;
		borrow->borrowYear = releaseDate;
		return borrow;
	}

	else {
		Transactions* returnTrans = new Return();
		return returnTrans;
	}
}

void TransactionFactory::processQueue(MovieFactory moviefactory,CustomerDatabase cd)
{
	while (!transactionQueue.empty()) {
		if (transactionQueue.front().transactionType == 'I') {
			cout << "Inventory transaction" << endl;
			Inventory* temp{};
			temp->executeTransactions(moviefactory);
			transactionQueue.pop();
		}
		else if (transactionQueue.front().transactionType == 'H') {
			cout << "History transaction" << endl;
			History* temp{};
			temp->executeTransactions(cd);
			transactionQueue.pop();
		}
		else if (transactionQueue.front().transactionType == 'B') {
			cout << "borrow transaction" << endl;
			Borrow* temp{};
			temp->executeTransactions();
			transactionQueue.pop();
		}
		else {
			cout << "return transaction" << endl;
			Return* temp{};
			temp->executeTransactions();
			transactionQueue.pop();
		}
	}
}
