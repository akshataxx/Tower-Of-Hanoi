/*
Description: This file holds the implementation code for the template class declared in LinkedList.h file . For details pls. see the comments in LinkedList.h file
Precondition: LinkedList.h is defined
Postcondition: methods defined in LinkedList.h have its implementation code written here.
*/
#include "LinkedList.h"

template <typename value_type>
LinkedList<value_type>::LinkedList()
{
	head = NULL; 
	tail = NULL;
	current = NULL;
	list_length=0;
}

template <typename value_type>
LinkedList<value_type>::~LinkedList()				//destructor function helps to remove all nodes from the heap upon deletion of linked list
{
	current=head;
	while(current !=NULL)
		removeFromHead();
	tail=NULL;
}

template <typename value_type>		
void LinkedList<value_type>::addToHead(value_type& value)
{
	current=new Node<value_type>(value);				//A node is created for addition into the linkedlist
	if (head == NULL) 									//if linkedlist doesn't have any value then create head node and assign the value in current to head
    {// list is empty
		head = current;									//assign current to head to create 1st node
		tail = current;
	} 
	else 
	{
		current->set_Next(head);						//add value to the head node
		head = current;
	}
	list_length++;										//increment linkedlist length
	current=NULL;
}

template <typename value_type>		
void LinkedList<value_type>:: removeFromHead()
{
	if(list_length==0)									//incase of empty list,don't do anything
		return;	
	else if(list_length==1)								//remove first node if only 1 node is in list
	{
		head=NULL;
		tail=NULL;
		current=NULL;
		list_length--;									//decrement the listlength
		return;
	}
	else
	{
		current=head;									//assign current to point at head pointer
		head=current->get_Next();						//Reset the head for the list
		current=NULL;
		list_length--;									//decrement the list
	}
}

template <typename value_type>		
void LinkedList<value_type>::takeFromHead()
{
	current = head;										//set current to point at head
	head = head->get_Next();							
	current->set_Next(NULL);							//remove the value in current
	list_length--;										//decrement the list length
}
		
template <typename value_type>		
value_type LinkedList<value_type>::getHead()			
{
    if(head!=NULL)
		return head->get_Data();						//returns data in the node
	else
	return 0;
}

template <typename value_type>	
int LinkedList<value_type>::listSize()
{
	list_length=0;
	current=head;										//set current to point at head	
	while(current != NULL)								//traverse till the end of linkedlist
	{
		list_length++;									//increment the length of list
		current=current->get_Next();
	}
	return list_length;									//returns the value in list length
}

template <typename value_type>
ostream& LinkedList<value_type>::print(ostream& out) 	
{
	current = head;
	while (current != NULL) { 							// traverses the linked list until the last element
		out <<"\t"<< "   "<< current->get_Data(); 				// prints the content of node pointed to by current
		current = current->get_Next();					// goes to the next node
	}   
	current=NULL;										// free-up the pointer 
	return out; 
}
           

template<typename value_type>
std::ostream& operator << (std::ostream& out, LinkedList<value_type>& l1)
{
    return l1.print(out);								//calls the print function
}
