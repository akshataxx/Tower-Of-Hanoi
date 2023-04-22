/*
Description: This file holds the implementation code for the template class declared in Node.h file . For details pls. see the comments in Node.h file
Precondition: Node.h is defined
Postcondition: methods defined in Node.h have its implementation code written here.
*/
#include <cstdlib>
#include "Node.h"

template <typename value_type>
Node<value_type>::Node(value_type& ddata)									//constructor to initialise the variable and pointers
{
	data= ddata;
	next = NULL; 
	prev = NULL;
} 
template <typename value_type>												//destructor to free-up the pointers
Node<value_type>::~Node()
{
	next = NULL;
	prev = NULL;
}
template <typename value_type>	
void Node<value_type>::set_Next(Node<value_type>* next_link)				//setter function
{
	next=next_link;
} 
template <typename value_type>		
void Node<value_type>::set_Prev(Node<value_type>* prev_link)				//setter function
{
	prev=prev_link;
}
template <typename value_type>		
value_type Node<value_type>::get_Data() const								//returns data
{
	return data;
}

template <typename value_type>												//getter function
Node<value_type>* Node<value_type>:: get_Next()
{return next;}

template <typename value_type>												//getter function
Node<value_type>* Node<value_type>:: get_Prev()
{return prev;}
 