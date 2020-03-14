#include <string>
#include "Drama.h"
#include <iostream>

Drama::Drama()
{

}

Drama::Drama(char thisType, int thisQuantity, string thisDirector, string thisTitle, int thisYear)
{
	thisType = type;
	thisQuantity = quantity;
	thisDirector = director;
	thisTitle = title;
	thisYear = year;
}

Drama::~Drama()
{
}

void Drama::setYear(int year)
{
	this->year = year;
}

int Drama::getYear()
{
	return this->year;
}

char Drama::getMovieType()
{
	return 'D';
}

bool Drama::operator==(const Drama& drama) const
{
	if (this->director == drama.director) {	//checks directors
		return true;
	}
	if (this->title == drama.title) {		//checks titles
		return true;
	}
	else {
		return false;
	}
}

bool Drama::operator!=(const Drama& drama) const
{
	return !(operator==(drama));	//returns the opposite of ==
}

bool Drama::operator<(const Drama& drama) const
{
	if (this->director < drama.director) {
		return true;
	}
	if (this->title < drama.title) {
		return true;
	}
	else {
		return false;
	}
}

bool Drama::operator>(const Drama& drama) const
{
	if (this->director > drama.director) {
		return true;
	}
	if (this->title > drama.title) {
		return true;
	}
	else {
		return false;
	}
}

bool Drama::operator<=(const Drama& drama) const
{
	if (this->director <= drama.director) {
		return true;
	}
	if (this->title <= drama.title) {
		return true;
	}
	else {
		return false;
	}
}

bool Drama::operator>=(const Drama& drama) const
{
	if (this->director >= drama.director) {
		return true;
	}
	if (this->title >= drama.title) {
		return true;
	}
	else {
		return false;
	}
}

Drama& Drama::operator=(const Drama& drama)
{
	if (*this != drama) {
		this->director = drama.director;
		this->title = drama.title;
		this->year = drama.year;
		this->quantity = drama.quantity;
		this->type = drama.type;
	}
	return *this;
}

//-------------------------- operator<< --------------------------------------
ostream& operator<<(ostream& output, Drama& nd){
	output << nd.type << ", " << nd.quantity <<  ", " <<
		nd.director <<  ", " << nd.title <<  ", "  << nd.year << endl;
	return output;
}
