/*
Description: This file holds the implementation code for the DiscInt class declared in DiscInt.h file . For details pls. see the comments in DiscInt.h file
Precondition: DiscInt.h is defined
Postcondition: methods defined in DiscInt.h have its implementation code written here.
*/
#include <iostream>
#include <cstdlib>

#include "DiscInt.h"												//header file is included
using namespace std;

int DiscInt::get_disc() const										//returns the value in disc variable
{
	return disc_int;
}	
				
std::ostream& operator <<(std::ostream& out,const DiscInt& value)	//operator overloding function to print the value in disc
{
	out << value.get_disc() << endl;
	return out;
}

bool operator == (const DiscInt& d1, const DiscInt& d2)				//operator overloding function to return boolean value based on the comparision of 2 disc
{
	if(d1.get_disc()==d2.get_disc())
		return true;
	else
		return false;
}

bool operator <(const DiscInt& d1, const DiscInt& d2) 				// operator overloading function to compare 2 objects of DiscInt class and return boolean value
{
	if(d1.get_disc() < d2.get_disc())
		return true;
	else
		return false;
}
