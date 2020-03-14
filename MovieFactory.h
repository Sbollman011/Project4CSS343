#ifndef MOVIE_FACTORY_H
#define MOVIE_FACTORY_H
#include <fstream>

#include "Movie.h"
#include "Comedy.h"
#include "Classic.h"
#include "Drama.h"
#include "ComedyBST.h"
#include "ClassicBST.h"
#include "DramaBST.h"
#include <sstream>

using namespace std;


class MovieFactory {
public:
	//	MovieFactory();
	//	virtual ~MovieFactory();
	void readFile(); //reads file and calls store movie
	bool storeMovie(ifstream& input); //decides which type of movie, allocates attributes and calls make movie
									//inserts into BST

	Classic* makeClassicMovie(); //makes a Classic movie to be insrted into BST
	Drama* makeDramaMovie();	//makes a Drama movie to be insrted into BST
	Comedy* makeComedyMovie();	//makes a Comedy movie to be insrted into BST

	ClassicBST getClassicBST(); //returns ClassicBST
	DramaBST getDramaBST();		//returns DramaBST
	ComedyBST getComedyBST();	//returns ComedyBST


	char movieType;
	int releaseDate, quantity, year, releaseMonth, ryear, classicReleaseMonth, classicReleaseYear;
	string title, actor, director, inventory, releaseYear, cActorFname, 
		cActorLname, releaseMonthS, releaseYearS;

	ComedyBST comedyBST;
	DramaBST dramaBST;
	ClassicBST classicBST;

};

#endif