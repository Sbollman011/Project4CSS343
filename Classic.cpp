#include<iostream>
#include "Classic.h"


Classic::Classic() {
}		//default constructor 

//constructor with parameters for use in the factory
Classic::Classic(char thisType, int thisQuantity, string thisDirector, string thisTitle,
	string thisActor, int thisReleaseMonth, int thisReleaseYear) {
	type = thisType;
	quantity = thisQuantity;
	director = thisDirector;
	title = thisTitle;
	actor = thisActor;
	releaseMonth = thisReleaseMonth;
	releaseYear = thisReleaseYear;
}
Classic::~Classic() {}		//destructor

//sets the release date of the movie
void Classic::setReleaseMonth(int thisReleaseMonth) {
	releaseMonth = thisReleaseMonth;
}
int Classic::getReleaseMonth() //returns the release date of the movie
{
	return releaseMonth;
}

void Classic::setReleaseYear(int thisReleaseYear) {
	releaseYear = thisReleaseYear;
}

int Classic::getReleaseYear() //returns the release date of the movie
{
	return releaseYear;
}

void Classic::setActor(string thisName) //sets the actor of the movie
{
	actor = thisName;
}


string Classic::getActor() //returns the actor of the movie
{
	return actor;
}
char Classic::getMovieType()	//returns the movie type 
{
	return type;
}

bool Classic::operator==(const Classic& classic) const
{
	if (this->releaseYear == classic.releaseYear) {	//checks release date
		return true;
	}

	if (this->releaseMonth == classic.releaseMonth) {
		return true;
	}

	if (this->actor == classic.actor) {		//checks Acotr
		return true;
	}
	else {
		return false;
	}
}

bool Classic::operator!=(const Classic& classic) const
{
	return !(operator==(classic));	//returns the opposite of ==
}

bool Classic::operator<(const Classic& classic) const
{
	if (this->releaseMonth < classic.releaseMonth) {	//compares release date
		return true;
	}

	if (this->releaseYear < classic.releaseYear) {	//compares release date
		return true;
	}

	if (this->actor < classic.actor) {	//compares actor
		return true;
	}
	else {
		return false;
	}
}

bool Classic::operator>(const Classic& classic) const
{
	if (this->releaseMonth > classic.releaseMonth) {	//compare release dates
		return true;
	}

	if (this->releaseYear > classic.releaseYear) {	//compare release dates
		return true;
	}
	if (this->actor > classic.actor) {	 //compare actors
		return true;
	}
	else {
		return false;
	}
}

bool Classic::operator<=(const Classic& classic) const
{
	if (this->releaseMonth <= classic.releaseMonth) {	//compare release dates
		return true;
	}
	if (this->releaseYear <= classic.releaseYear) {	//compare release dates
		return true;
	}
	if (this->actor <= classic.actor) {	//compare actor
		return true;
	}
	else {
		return false;
	}
}

bool Classic::operator>=(const Classic& classic) const
{
	if (this->releaseMonth >= classic.releaseMonth) {	//compare release dates
		return true;
	}

	if (this->releaseYear >= classic.releaseYear) {	//compare release dates
		return true;
	}

	if (this->actor >= classic.actor) {	//compare actor
		return true;
	}
	else {
		return false;
	}
}

Classic& Classic::operator=(const Classic& classic)
{
	if (*this != classic) {
		this->director = classic.director;
		this->title = classic.title;
		this->releaseMonth = classic.releaseMonth;
		this->releaseYear = classic.releaseYear;
		this->quantity = classic.quantity;
		this->type = classic.type;
		this->actor = actor;
	}
	return *this;
}

//-------------------------- operator<< --------------------------------------
ostream& operator<<(ostream& output, Classic& nd) {
	output << nd.type << ", " << nd.quantity << ", " <<
		nd.director << ", " << nd.title << ", " << nd.releaseMonth << " "<<nd.releaseYear << " " << nd.actor << endl;
	return output;
}