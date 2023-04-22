/*
Description: This program defines all the functions of DiscInt class used to build the disc of type integer
Precondition:  TowerHanoiDemo class exist
Postcondition: Disc of type Integer are generated and passed to other template class as per the assignment specifications

Private variables: as per the assignment specification, of type integer is defined to generate the disc as per the assignment specification 

Public members:

DiscInt(int num=0);
Description: 	 Copy constructor 
Precondition:    Members are declared
Postcondition:   Disc structure is created

int get_disc() const;
Description:	Getter function to return the disc
Precondition: 	disc is created
Postcondition:	returns disc value

std::ostream& operator <<(std::ostream& out,const DiscInt& value)
Description: operator overloading function to print the value in the disc
Precondition: disc is created
Postcondition: disc are printed

bool operator == (const DiscInt& d1, const DiscInt& d2)
Description: overlaoded operator function, compares the value of 2 disc objects and returns true or false value
Precondition: DiscInt class is defined and implemented
Postcondition: return boolean value based on the result of comparing 2 DiscInt objects

bool operator <(const DiscInt& d1, const DiscInt& d2) ;
Description: overlaoded operator function to check if d1 is < d2 , where both d1 and d2 are objects of DiscInt class, function returns boolean value
Precondition: DiscInt class is defined and implemented
Postcondition: return true or false based on the comparision result
*/
// macroguards
#ifndef DISCINT_H
#define DISCINT_H	

#include <iostream>
#include <cstdlib>

using namespace std;

class DiscInt
{
	private:														//Private variables
		int	disc_int;
	public:										
		DiscInt(int disc_int_=0)		{disc_int= disc_int_;}		//Constructor
		int get_disc() const;										//Getter function to return the value in the disc
};
std::ostream& operator <<(std::ostream& out,const DiscInt& value);	//Operator overloading function to print the disc values
bool operator == (const DiscInt& d1, const DiscInt& d2);			//Operator overloading function to compare the disc value and return boolean value
bool operator <(const DiscInt& d1, const DiscInt& d2);				//Operator overloading function to compare the check the value in d1 is < d2 , where d1 and d2 are objects of DiscInt class
#endif