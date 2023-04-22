/*
Description: This file holds the implementation code for the template class declared in LStack.h file . For details pls. see the comments in LStack.h file
Precondition: LStack.h is defined
Postcondition: methods defined in LStack.h have its implementation code written here.
*/
#include "LStack.h"											//LStack template class defination included

template <typename value_type>								//constructor
LStack<value_type>::LStack()	
{}				
 
template <typename value_type>								//destructor
LStack<value_type>::~LStack()
{}  			

template <typename value_type>
void LStack<value_type>::push(value_type value)				//push a new disc into the stack via calling addToHead function of the LinkedList template class
{
	list.addToHead(value);								
}

template <typename value_type>								//removes the value in the head node
void LStack<value_type>::pop()	
{
	list.takeFromHead();
}

template <typename value_type>
value_type LStack<value_type>:: peek()						//returns the value in the head node
{
	return list.getHead(); 
}

template <typename value_type>	
int LStack<value_type>:: listLength()						//returns the length of list or number of nodes in the stack
{
	return list.listSize();
}

template <typename value_type>								//returns boolean value based on the check if data exist in the linked list
bool LStack<value_type>::is_Empty()							
{
	int len=list.listSize();
	if (len==0) 
		return true;
	else 
		return false;
}

template <typename value_type>
ostream& LStack<value_type>::printList(ostream& out)		//supporting function to print the stack values
{
	
	out << list; 
	out << "\t------------"<<endl;
	return out;													
}

template <typename value_type>
ostream& operator << (ostream& out,  LStack<value_type>& mystack) 
{
    return mystack.printList(out);							//operator overloading function to print the data in stacks, calls the supporting printlist function
}