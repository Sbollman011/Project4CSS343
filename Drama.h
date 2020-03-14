#ifndef DRAMA_H
#define DRAMA_H
//#ifdef DRAMA_H
#include "Movie.h"
#include <string>

using namespace std;

class Drama :public Movie {
	friend ostream& operator<<(ostream& output, Drama& nd);
public:
	Drama();		//default constructor
	//constructor with parameters for use in the factory
	Drama(char type, int quantity, string director, string title, int year);
	~Drama();		//destructor

	virtual void setYear(int year);	//sets the release year of the movie
	virtual int getYear();		//returns the release year of the movie

	virtual char getMovieType();	//returns the type of the movie

	int year;		//stores the release year of the movie

	bool operator==(const Drama&) const;	//equal operator overload
	bool operator!=(const Drama&) const;	//not equal operator overload
	bool operator<(const Drama&) const;	//less-than operator overload
	bool operator>(const Drama&) const;	//greater-than operator overload
//less-than-or-equal- to operator overload
	bool operator<=(const Drama&) const;
	//greater-than-or-equal- to operator overload	
	bool operator>=(const Drama&) const;
	Drama& operator=(const Drama&);	//assignment operator
};


#endif // DRAMA_H

