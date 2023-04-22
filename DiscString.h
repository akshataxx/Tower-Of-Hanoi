/*
Description: This program defines all the functions of DiscString class used to build the disc of type String
Precondition:  TowerHanoiDemo class exist
Postcondition: Disc of type string are generated and passed to other template class as per the assignment specifications

Private variables: as per the assignment specification, of type string is defined to generate the disc as per the assignment specification 

Public members:

DiscString(int num=0);
Description: 	 Copy constructor 
Precondition:    Members are declared
Postcondition:   Disc structure is created

string get_disc() const;
Description:	Getter function to return the disc
Precondition: 	disc is created
Postcondition:	returns disc

std::ostream& operator <<(std::ostream& out,const DiscString& value)
Description: operator overloading function to print the value in the disc
Precondition: disc is created
Postcondition: disc are printed

bool operator == (const DiscString& d1, const DiscString& d2);
Description: overlaoded operator function, compares the value of 2 disc objects and returns true or false value
Precondition: DiscString class is defined and implemented
Postcondition: return boolean value based on the result of comparing 2 DiscString objects

bool operator <(const DiscString& d1, const DiscString& d2) ;
Description: overlaoded operator function to check if d1 is < d2 , where both d1 and d2 are objects of DiscString class, function returns boolean value
Precondition: DiscString class is defined and implemented
Postcondition: return true or false based on the comparision result
*/
// macroguards
#ifndef DISCSTRING_H
#define DISCSTRING_H	

#include <string>
#include <iostream>
#include <cstdlib>
#include<bits/stdc++.h> 
using namespace std;

class DiscString
{
	private:																//private variable
		string disc_str;		
	public:																	//public methods
		DiscString(int num=0)												//constructor
		{
			static int i=num;												//static variable used to store the number of disc which needs to be generated
			for (int space = num; space <= i ; ++space)						//Loop to add space to disc
				disc_str=disc_str+ " ";						
			for (int k=1;k <= (2 * num - 1);k++)							//Loop to add string value to disc
				disc_str=disc_str+ "X"; 	
		}		
		string get_disc() const;											//function to return disc value
};
std::ostream& operator <<(std::ostream& out,const DiscString& value);		//operator overloading function for printing
bool operator == (const DiscString& d1, const DiscString& d2);				//operator overloading function for comparision of 2 disc values
bool operator <(const DiscString& d1, const DiscString& d2) ;				//operator overloading function to compare to 2 disc and return boolean value
#endif