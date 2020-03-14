/// ------------------------------------------------ Movie.cpp -------------------------------------------------------

// Steven Bollman CSS 343 C

// Creation Date - 3/3/2020

// Date of Last Modification - 3/3/2020

// --------------------------------------------------------------------------------------------------------------------

// Purpose - This program provides constructors, destructors, getters and setters for the movie class. The getters and setters procvided
// for the director, title, quantity, movietype, and year
// --------------------------------------------------------------------------------------------------------------------

// --------------------------------------------------------------------------------------------------------------------




#include <iostream>
#include <string>
#include <sstream>
#include "Movie.h"


using namespace std;

Movie::Movie() {

}	//constructor
Movie::~Movie() {

}	//destructor

Movie::Movie(string mDirector, string mTitle, char mMovieType, int mQuantity, int mYear) {
	mDirector = director;
	mTitle = title;
	mMovieType = type;
	mQuantity = quantity;
	mYear = year;
}

Movie::Movie(string mDirector, string mTitle, char mMovieType, int mQuantity, int mYear, string mActor) {
	director = mDirector;
	title = mTitle;
	type = mMovieType;
	quantity = mQuantity;
	year = mYear;
	actor = mActor;
}

void Movie::setDirector(string name) {
	director = name;
}	 //sets the name of the director

string Movie::getDirector() {
	return director;

}		//returns the name of the director for aa movie

void Movie::setTitle(string name) {
	title = name;

}	//sets the title
string Movie::getTitle() {
	return title;

}	//returns the title for a given movie

void Movie::setQuantity(int amount) {
	quantity = amount;
}	//sets quantity

int Movie::getQuantity() {
	return quantity;

}	//returns quantity

void Movie::setMovieType(char movieType) {
	type = movieType;

}	//sets the movie type

char Movie::getMovieType() const {
	return type;
}	//virtual function to return movie type

void Movie::setYear(int releaseyear) { //sets movies year
	year = releaseyear;
}

int Movie::getYear() { //returns movie year
	return year;
}

void Movie::setReleaseMonth(int releaseMonth)
{
}

int Movie::getReleaseMonth()
{
	return 0;
}

void Movie::setReleaseYear(int releaseYear)
{
}

int Movie::getReleaseYear()
{
	return 0;
}

void Movie::setActor(string thisActor) {  //sets actor for classic movies
	actor = thisActor;
}
string Movie::getActor() { //returns the actors
	return actor;
}

bool Movie::operator==(const Movie& movie) const
{
	if (movie.director == director) {	//checks directors
		return true;
	}
	if (movie.title == title) {		//checks titles
		return true;
	}
	else {
		return false;
	}
}

bool Movie::operator!=(const Movie& movie) const
{
	return !(operator==(movie));	//returns the opposite of ==
}

bool Movie::operator<(const Movie& movie) const
{
	if (movie.director < director) {
		return true;
	}
	if (movie.title < title) {
		return true;
	}
	else {
		return false;
	}
}

bool Movie::operator>(const Movie& movie) const
{
	if (movie.director > director) {
		return true;
	}
	if (movie.title > title) {
		return true;
	}
	else {
		return false;
	}
}

bool Movie::operator<=(const Movie& movie) const
{
	if (movie.director <= director) {
		return true;
	}
	if (movie.title <= title) {
		return true;
	}
	else {
		return false;
	}
}

bool Movie::operator>=(const Movie& movie) const
{
	if (movie.director >= director) {
		return true;
	}
	if (movie.title >= title) {
		return true;
	}
	else {
		return false;
	}
}

Movie& Movie::operator=(const Movie& movie)
{
	if (this != &movie) {
		director = movie.director;
		title = movie.title;

	}
	return *this;
}

//-------------------------- operator<< --------------------------------------
ostream& operator<<(ostream& output, Movie& nd) {
	output << nd.type << ", " << nd.coutQuantity << ", " << nd.director << ", " << nd.title << ", " << nd.year << endl;
	return output;
}