#ifndef MOVIE_DATABASE_H
#define MOVIE_DATABASE_H

#include "MovieBST.h"
#include "Movie.h"
#include <vector>

using namespace std;

class MovieDatabase {

public:
	~MovieDatabase();		//destructor
	MovieBST getComedies();	//gets the BST for comedies
	MovieBST getDramas();	//gets the BST for dramas
	MovieBST getClassics();	//gets the BST for classics

protected:
	vector <MovieBST(Movie)> trees;

	MovieBST comedies;	//stores comedies
	MovieBST dramas;		//stores dramas
	MovieBST classics;	//stores classics
};

#endif