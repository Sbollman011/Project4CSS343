/// ------------------------------------------------ Movie.h -------------------------------------------------------
//
// Steven Bollman CSS 343 C
//
// Creation Date - 3/3/2020
//
// Date of Last Modification - 3/3/2020
//
// --------------------------------------------------------------------------------------------------------------------
//
// Purpose - This is the header file for the Movie class, and outlines constructors, getters and setters for director,
//title, quantity, movieType, and year.
// --------------------------------------------------------------------------------------------------------------------
//
// --------------------------------------------------------------------------------------------------------------------



#ifndef MOVIE_H
#define MOVIE_H

#include <string>

using namespace std;

class Movie {

public:
	Movie();	//constructor
	Movie(string director, string title, char movieType, int quantity, int year); //constructor
	Movie(string director, string title, char movieType, int quantity, int year, string actor); //constructor for classic movies
	virtual ~Movie();	//destructor

	virtual void setDirector(string name);	//sets the name of the director
	virtual string getDirector();		//returns the name of the director for aa movie

	virtual void setTitle(string name);	//sets the title
	virtual string getTitle();	//returns the title for a given movie

	virtual void setQuantity(int amount);	//sets quantity
	virtual int getQuantity();	//returns quantity

	virtual void setMovieType(char type);	//sets the movie type
	virtual char getMovieType() const;	//virtual function to return movie type, removed = 0

	virtual void setActor(string actor); //sets actor for classic movies
	virtual string getActor(); //returns the actors


	virtual void setYear(int year); //set year
	virtual int getYear(); // returns year

	virtual void setReleaseMonth(int releaseMonth);
	virtual int getReleaseMonth();

	virtual void setReleaseYear(int releaseYear);
	virtual int getReleaseYear();

	bool operator==(const Movie&) const;	//equal operator overload
	bool operator!=(const Movie&) const;	//not equal operator overload
	bool operator<(const Movie&) const;	//less-than operator overload
	bool operator>(const Movie&) const;	//greater-than operator overload
	//less-than-or-equal- to operator overload
	bool operator<=(const Movie&) const;
	//greater-than-or-equal- to operator overload	
	bool operator>=(const Movie&) const;
	Movie& operator=(const Movie&);	//assignment operator
	friend ostream& operator<<(ostream& output, Movie& nd);



	string director;	//holds the movie director
	string title;		//holds the movie title
	char type;		//holds the movie type
	int quantity;		//holds the quantity of the movie
	int year;		// hold year movie was released
	string actor;  //holds the actor for classic movies

	string coutType;
	string coutQuantity;
	string coutYear;
};
#endif