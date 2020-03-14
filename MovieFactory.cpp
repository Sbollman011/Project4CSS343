// ---------------------------------- MovieFactory.cpp -----------------------

// Genny Brown CSS 343

// 03/02/2020

// 02/15/2020

// ----------------------------------------------------------------------------

// this file implements the movie factory

// ----------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "Movie.h"
#include "MovieFactory.h"
#include "TransactionFactory.h"

void MovieFactory::readFile()
{
	ifstream input("data4movies.txt");
	storeMovie(input);
}

// ----------------------storeMovie(ifstream& input)-----------------------
//
// Description
//	reads from the file and calls the helper function to create the movie objects
//
// preconditions: there is a valid file to be read from
// 
// postconditions: helper function is called and the variables for the oject are 
// initalized
// ---------------------------------------------------------------------------
bool MovieFactory::storeMovie(ifstream& input)
{

	
	while (!input.eof()) {	//checks to see if at end of file
		input >> movieType;			//reads movie type
		if (movieType == 'F') {		//if comedy

			getline(input, inventory, ',');	//reads inventory
			getline(input, director, ',');	//reads director
			getline(input, title, ',');	//reads title
			getline(input, releaseYear, ',');	//reads release year
			quantity = stoi(inventory);	//converts from string to int
			year = stoi(releaseYear);	//converts from string to int
			//Movie *comedy = new Comedy;
			comedyBST.insert(*makeComedyMovie());
			//comedyBST.insert(comedy);		//creates the comedy object
			return true;
		}
		else if (movieType == 'D') {	//if drama
			getline(input, inventory, ',');	//reads inventory
			getline(input, director, ',');	//reads director
			getline(input, title, ',');	//reads title
			getline(input, releaseYear, ',');	//reads release year
			quantity = stoi(inventory);	//converts from string to int
			year = stoi(releaseYear);	//converts from string to int

			dramaBST.insert(*(makeDramaMovie()));	//creates the drama object
			return true;
		}
		else if (movieType == 'C') {	//if classic
			input.ignore();
			getline(input, inventory, ',');
			stringstream ss;
			ss << inventory;
			ss >> quantity;

			getline(input, director, ',');
			getline(input, title, ',');
			input >> cActorFname;
			input >> cActorLname;
			input >> releaseMonth;
			input >> releaseYear;
			actor = cActorFname + " " + cActorLname;

			classicBST.insert(*(makeClassicMovie()));
			return true;
		}
		else {	//if incorrect formatting
			cout << "Incorrect input formatting" << endl;
			return false;
		}
	}//end while loop

}
//end storeMovie(ifstream& input)


// ----------------------makeMovie(char movieType)-----------------------
//
// Description
//	creates the movie objects
//
// preconditions: there is a movie type passed into the function
// 
// postconditions: movie objects are created with variables initalized
// ---------------------------------------------------------------------------
Classic* MovieFactory::makeClassicMovie()
{
		//cout << "making classic" << endl;
		Classic* classic = new Classic();	//creates classic object
		classic->setActor(actor);	//sets actor
		classic->setDirector(director);	//sets director
		classic->setMovieType('C');		//sets movie type
		classic->setQuantity(quantity);	//sets quantity
		classic->setTitle(title);	//sets title
		classic->setReleaseMonth(releaseMonth);	//sets release date
		classic->setReleaseYear(year);
		return classic;
	}


Comedy* MovieFactory::makeComedyMovie() {

	Comedy* comedy = new Comedy();	//creates new comedy oject
	comedy->setDirector(director);	//sets director
	comedy->setMovieType('F');	//sets movie type
	comedy->setQuantity(quantity);	//sets quantity
	comedy->setTitle(title);	//sets title
	comedy->setActor(actor);	//sets actor
	comedy->setYear(year);	//sets year
	return comedy;
}

Drama* MovieFactory::makeDramaMovie() {

	Drama* drama = new Drama();		//creates new drama object
	drama->setDirector(director);	//sets director
	drama->setMovieType('D');	//sets movie type
	drama->setQuantity(quantity);		//sets quantity
	drama->setTitle(title);		//sets title
	drama->setActor(actor);		//sets actor
	drama->setYear(year); //sets year
	return drama;

}

ClassicBST MovieFactory::getClassicBST() { // returns classicBST
	return classicBST;
}

DramaBST MovieFactory::getDramaBST() { //returns dramaBST
	return dramaBST;
}

ComedyBST MovieFactory::getComedyBST() { //returns comedyBST
	return comedyBST;
}



//end makeMovie(char movieType)