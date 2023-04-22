/*
Description: This program defines all the functions of Node class
Precondition:  Node.h needs to be present with all the function declaration
Postcondition: Nodes are created which can further be used within linkedlist

Private variables: as per the assignment specification, value_type is defined as template, this value_type_type is further used to define 'data' variable
next and prev pointers are used to keep track of nodes in doubly linkedlist

Public members:
Node(value_type& ddata);
Description: 	 Copy constructor 
Precondition:    Members are declared
Postcondition:   A new instance of Node is created and its instance data initialsed

~Node()
Description:	DESTRUCTOR
Precondition: 	Node is created and initialised
Postcondition:	Memory space occupied by node is freed upper_bound

void set_Next(Node<value_type>* next_link);
void set_Prev(Node<value_type>* prev_link);
Description: 	 Mutator methods to Set the next and prev pointers
Precondition:    next and prev pointers are initialised
Postcondition:   sets the value of next and prev pointer based on the value passed as argument  

value_type get_Data() const;
Description:	returns the data stored in the node
Precondition :  constructor is defined to initialise the value
Postcondition:  returns value of value_type stored in the node

Node* get_prev();//A CONSTANT VERSION THAT RETURNS AN ORDINARY NODE POINTER 
Node* get_next();//A CONSTANT VERSION THAT RETURNS AN ORDINARY NODE POINTER
Description:	 returns the prev and next point position
Precondition:    next and prev pointers are declared and initialised
Postcondition:   returns the value of next and prev pointer  
*/
// macroguards
#ifndef NODE_H
#define NODE_H
#include <cstdlib>

using namespace std;

template <typename value_type>
class Node 
{
	private:													//MEMBERS ACCESSIBLE ONLY WITHIN FUNCTIONS OF NODE CLASS
		value_type data;
		Node* next;
		Node* prev;													
	public:														//MEMBERS THAT ARE VISIBLE OUTSIDE THE CLASS
		Node(value_type& ddata);								//CONSTRUCTOR
		~Node();												//DESTRUCTOR
		void set_Next(Node<value_type>* next_link);				//MUTATOR METHOD (setter)
		void set_Prev(Node<value_type>* prev_link);				//MUTATOR METHOD (setter)
		value_type get_Data() const;							//FUNCTION TO RETURN DATA
		Node<value_type>* get_Next();							//ACCESSOR METHOD TO RETURN A NODE*		
		Node<value_type>* get_Prev();							//ACCESSOR METHOD TO RETURN A NODE*	
};
#include "Node.hpp"												//TEMPLATE CLASS IMPLEMENTATION CODE
#endif 