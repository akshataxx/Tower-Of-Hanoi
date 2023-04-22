/*
Description: This program declares all the functions of TowerHanoi class
Precondition:  Node, LinkedList and Stack template class exist
Postcondition: All functions of TowerHanoi class are defined

LStack<value_type> left, center ,right;
Description: Private stack variables to represent 3 rods used in the gamestate
Precondition: Node, LinkedList and Stack classes are defined and implemented
Postcondition : 3 stacks are created with underlying linkedlist and Node datastructures

TowerHanoi(const int NOD);
Description: copy constructor to pass the value of the number of disc as selected by the user to the underlying DiscInt or DiscString class based on the callout
Precondition: DiscInt and DiscString classes are defined to generate the game structure
Postcondition: Disc are created and inserted into the left stack i.e. the starting position of the game.

void move(int rFrom, int rTo);		
Description: function holds the rules of disc movement
Precondition: Disc are created and inserted in the stack
Postcondition: Disc moves to the rTo rod from rFrom rod, if it meets the rules of movement

bool checkWin();
Description: checks if all the disc have reached the 3rd rod
Precondition: Disc and stacks exist along with the ability to move them from one rod to another rod
Postcondition: returns boolean value true or false 

ostream& printStack(ostream& out);
Description: supporting function used for printing of stacks
Precondition: Disc and stacks exist
Postcondition: returns the value in the stack/ rod to overloded printing function for display on the screen

ostream& operator << (ostream &out, TowerHanoi<value_type> &t);
Description: Overloaded operator function for printing of the data in the stack
Precondition: Disc and stacks exist and printStack function is defined
Postcondition: data in stack is displayed

*/
#ifndef TOWERHANOI_H
#define TOWERHANOI_H	

#include <string>
#include<bits/stdc++.h> 

#include "LStack.h"								

using namespace std;
template <typename value_type>										//template class
class TowerHanoi 
{
	private:
		LStack<value_type> left, center ,right;						//objects of stack class created to represent 3 rods of the game
	public:
		TowerHanoi(const int NOD);									//constructor
		~TowerHanoi();												//destructor
		void move(int rFrom, int rTo);								//function to move the disc between the rods, specifies the rules of movement			
		bool checkWin();											//checks if the game is completed
		ostream& printStack(ostream& out);							//supporting function to print the values in the stack
};

template <typename value_type>
ostream& operator << (ostream &out, TowerHanoi<value_type> &t);		//operator overloading function to print the values in the stack, calls printStack function

#include "TowerHanoi.hpp"
#endif //TowerHanoi.H
