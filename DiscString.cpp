/*
Description: This file holds the implementation code for the DiscString class declared in DiscString.h file . For details pls. see the comments in DiscString.h file
Precondition: DiscString.h is defined
Postcondition: methods defined in DiscString.h have its implementation code written here.
*/
#include <string>
#include <iostream>
#include <cstdlib>

#include "DiscString.h"

using namespace std;
	
string DiscString:: get_disc() const										//function to return the value in disc
{
	return disc_str;
}

std::ostream& operator <<(std::ostream& out,const DiscString& value)		//Operator overloading function to print the disc values
{
	out << value.get_disc() << endl;
	return out;
}
bool operator == (const DiscString& d1, const DiscString& d2)				//Operator overloading function to compare the 2 disc object and return boolean value
{
	
	if(d1.get_disc().length() == d2.get_disc().length())
		return true;
	else
		return false;
}
bool operator <(const DiscString& d1, const DiscString& d2) 				//Operator overloading function to compare the 2 disc object and retunr the boolean value
{
	if(d1.get_disc().length() < d2.get_disc().length())
		return true;
	else
		return false;
}