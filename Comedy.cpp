#include <string>
#include <iostream>
#include "Comedy.h"

Comedy::Comedy()
{

}

Comedy::Comedy(char type, int quantity, string director, string title, int year)
{
	type = type;
	quantity = quantity;
	director = director;
	title = title;
	year = year;
}

Comedy::~Comedy()
{
}

void Comedy::setYear(int year)
{
	this->year = year;
}

int Comedy::getYear()
{
	return this->year;
}

char Comedy::getMovieType()
{
	return 'F';
}

bool Comedy::operator==(const Comedy& comedy) const
{
	if (this->title == comedy.title) {	//checks titles
		return true;
	}
	if (this->year == comedy.year) {		//checks years
		return true;
	}
	else {
		return false;
	}
}

bool Comedy::operator!=(const Comedy& comedy) const
{
	return !(operator==(comedy));	//returns the opposite of ==
}

bool Comedy::operator<(const Comedy& comedy) const
{
	if (this->title < comedy.title) {	//compares titles
		return true;
	}
	if (this->year < comedy.year) {	//compares years
		return true;
	}
	else {
		return false;
	}
}

bool Comedy::operator>(const Comedy& comedy) const
{
	if (this->title > comedy.title) {	//compare titles
		return true;
	}
	if (this->year > comedy.year) {	 //compare years
		return true;
	}
	else {
		return false;
	}
}

bool Comedy::operator<=(const Comedy& comedy) const
{
	if (this->title <= comedy.title) {	//compare titles
		return true;
	}
	if (this->year <= comedy.year) {	//compare years
		return true;
	}
	else {
		return false;
	}
}

bool Comedy::operator>=(const Comedy& comedy) const
{
	if (this->title >= comedy.title) {		//compare titles
		return true;
	}
	if (this->year >= comedy.year) {	//compare years
		return true;
	}
	else {
		return false;
	}
}

Comedy& Comedy::operator=(const Comedy& comedy)
{
	if (*this != comedy) {
		this->director = comedy.director;
		this->title = comedy.title;
		this->year = comedy.year;
		this->quantity = comedy.quantity;
		this->type = comedy.type;
	}
	return *this;
}

//-------------------------- operator<< --------------------------------------
ostream& operator<<(ostream& output, Comedy& nd) {
	output << nd.type << ", " << nd.quantity << ", " <<
		nd.director << ", " << nd.title << ", " << nd.year << endl;
	return output;
}