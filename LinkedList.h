/*
Description:Class representing a LinkedList to operate on data as per the assignment requirements, this file holds the function declarations
precondition: Node class is defined
postcondition: offers ability to add and manipulate data as per the assignment

Private variables
1) Node pointers created to navigate the linkedlist
2) Variable to track the linkedlist length
3) String typedef declared as the requirement in the assignment

Public members
LinkedList();					
Constructor description: Default constructor created to initialise the node pointers and linkedlist length variable. 
Precondition: Node class is defined
Postcondition: Members are initialised

~LinkedList()
Description: Destructor written to free up memory space taken up by the variables
Precondition: Node class exist and LinkedList member variables are defined and initialised
Postcondition: Memory space occupied by variables is freed up

void removeFromHead();
Description: Supporting function called from destructor
Precondition: Destructor is defined and called
Postcondition: frees up memory space occupied by variables, thus supporting desctuctor in its purpose

void addToHead(value_type& value);
Description: Add new node to head of linked list, function checks if the linked list already exist, if it doesn't exist creates head node. If it exist function adds node to head.
Precondition: LinkedList is defined and initialised
Postcondition: Node is added to the tail of the linked list

void removeFromHead(); 
Description: Supporting function to remove the node from Linkedlist, this function is called from the destructor function.
Precondition: linkedlist exist and holds data
Postcondition: free-up the nodes by assigning NULL value to them.

void takeFromHead();
Description: This function is called from the pop function of the LStack class.
Precondition: linkedlist exist and holds data
Postcondition: removes the head node from the linkedlist.

value_type getHead();
Description: This function is called from the peek function of the LStack class.
Precondition: linkedlist exist and holds data
Postcondition: returns  the data in the head node from the linkedlist.

ostream& print(ostream&) const;
Description: Supporting function to print the linkedlist,gets called from operator overloading function << 
Precondition: LinkedList exist and dataset has been added to it
Postcondition: value stored in linked list is printed

int listSize();
Description: Counts the number of nodes in the linkedlist.
Precondition: LinkedList exist and hold data
Postcondition: returns the count of the nodes found in the linkedlist

std::ostream& operator<<(std::ostream& stream,const LinkedList& l);
Description: Operator overloading function to print the linkedlist, uses supporting function print, to print the values in the private variables
Precondition: Linked list exist and holds data. Print function exist with ability to print the linkedlist
Postcondition: Data stored in LinkedList is printed
*/

//macroguards

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <cstdlib> 
#include<bits/stdc++.h> 
#include <iostream>

#include "Node.h"  					 

using namespace std;
template <typename value_type>
class LinkedList 
{
    private:												//private variables
		std::size_t list_length;  							//variable to store  count of the number of nodes in the linkedlist
		Node<value_type>* head;      		   				//head node of the linked list
        Node<value_type>* tail;								//tail node of the linked list
		Node<value_type>* current;							//current node 
	public:
		LinkedList();										//default constructor
		~LinkedList();										//destructor function helps to remove all nodes from the heap upon deletion of linked lis
		void addToHead(value_type& value);					//Implements stack functionality -FILO of addition
		void removeFromHead();								//Supporting function to remove data from head node
		void takeFromHead();
		value_type getHead();								//returns the value in the head node
		int listSize();										// returns the number of nodes in the linkedlist
		ostream& print(ostream& out);						//supporting function to print the values in the node of the linkedlist
};
template<typename value_type>
std::ostream& operator << (std::ostream& out, LinkedList<value_type>& l1);  //operator overloading function to print the data in the linkedlist

#include "LinkedList.hpp"
#endif 											//LinkedList.H