/*
Description:Class representing a Stack to operate on data as per the assignment requirements, this file holds the function declarations
precondition: Node and Linked class is defined
postcondition: offers ability to add data to stack

Private variables
variable of type LinkedList

Public members
LStack();					
Constructor description: Default constructor. 
Precondition: Node and LinkedList class is defined
Postcondition: Members are initialised

~LStack();
Description: Destructor function
Precondition: Node and LinkedList class exist 
Postcondition: Memory space occupied by variables is freed up

void removeFromHead();
Description: Supporting function called from destructor
Precondition: Destructor is defined and called
Postcondition: frees up memory space occupied by variables, thus supporting desctuctor in its purpose

void push(value_type value);
Description: Add data to stack via calling the addtoHead 
Precondition: LinkedList is defined and initialised
Postcondition: Node is added to the head of the linked list

ostream& printList(ostream&) const;
Description: Supporting function to print the Stack,gets called from operator overloading function << 
Precondition: LStack exist and dataset has been added to it
Postcondition: value stored in LStack is printed

int listLength();
Description: Counts the number of disc in the stack.
Precondition: Stacks exist and hold data
Postcondition: returns the count of the disc stored in the node, which inturn is stored in the linkedlist, wrapped inside LStack class

bool is_Empty();
Description: checks if the stack is empty and returns a value "true" if its empty and "false" if its not empty
Precondition: Stacks exist and hold data
Postcondition: returns boolean value based on the check condition

std::ostream& operator<<(std::ostream& stream,const LinkedList& l);
Description: Operator overloading function to print the stack, uses supporting function printList, to print the values in the private variables
Precondition: Stack exist and holds data. PrintList function exist with ability to print the stack
Postcondition: Data stored in stack is printed
*/
#ifndef LSTACK_H
#define LSTACK_H	
#include "LinkedList.h"												//LinkedList template class included

using namespace std;
template <typename value_type>							
class LStack
{
	private:
			LinkedList<value_type> list;							// Member variable of type LinkedList
    public:
			LStack();												//constructor
		   ~LStack();								 				//destructor
			void push(value_type value);							//function to add data to stack
			void pop();												//function to takeout the head node in the stack
			value_type peek();										//function to read the value in the head node of the stack
			int listLength();										//function to return the number of nodes in the stack
			bool is_Empty();										//function to return boolean value based on the check condiion
			ostream& printList(ostream& out);						//supporting function to print the data in stack
};
template <typename value_type>
ostream& operator << (ostream& out,  LStack<value_type>& mystack);	//Overloded operator function to print the data in the stack
#include "LStack.hpp"
#endif  //LSTACK.H