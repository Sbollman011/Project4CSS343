#ifndef COMEDY_H
#define COMEDY_H
#include "Movie.h"
#include <string>

using namespace std;


class Comedy :public Movie {
	friend ostream& operator<<(ostream& output, Comedy& nd);
public:
	Comedy();	//default constructor
	//constructor with parameters for creation in factory
	Comedy(char type, int quantity, string director, string title, int year);
	virtual ~Comedy();	//destructor

	void setYear(int year);	//set the release year of the movie
	int getYear();		//returns the release year of the movie


	virtual char getMovieType();	//returns the movie type

	int year;	//holds the release year of the movie

	bool operator==(const Comedy&) const;	//equal operator overload
	bool operator!=(const Comedy&) const;	//not equal operator overload
	bool operator<(const Comedy&) const;	//less-than operator overload
	bool operator>(const Comedy&) const;	//greater-than operator overload
//less-than-or-equal- to operator overload
	bool operator<=(const Comedy&) const;
	//greater-than-or-equal- to operator overload	
	bool operator>=(const Comedy&) const;
	Comedy& operator=(const Comedy&);	//assignment operator
};

#endif //COMEDY_H