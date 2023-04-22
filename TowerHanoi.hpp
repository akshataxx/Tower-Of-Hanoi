/*
Description: This file holds the implementation code for the template class declared in TowerHanoi.h file . For details pls. see the comments in TowerHanoi.h file
Precondition: TowerHanoi.h is defined
Postcondition: methods defined in TowerHanoi.h have its implementation code written here.
*/
#include "TowerHanoi.h"														//TowerHanoi header file included

template <typename value_type>
TowerHanoi<value_type>::TowerHanoi(const int NOD)							//constructor generates the disc structure
{
	for(int i=NOD; i >0;i--)
	{
		value_type disc(i); 
		left.push(disc);
	}
}

template <typename value_type>
TowerHanoi<value_type>::~TowerHanoi()										//destructor function
{}	

template <typename value_type>		
void TowerHanoi<value_type>::move(int rFrom, int rTo)						//function to move the disc between the rods based on the rules of the game
{
	if ((rFrom >=1 && rFrom <=3) && (rTo <=3 && rTo >=1))					//checks if the value entered is between 1 to 3
	{
		if(rFrom==1 && rTo==2)
		{		
			if(left.is_Empty()==false)										//checks if the left rod has any disc to move
			{
				if(center.is_Empty()==true)									//checks if the center rod is empty 
				{
					value_type tempdiscF=left.peek();
					left.pop();					
					center.push(tempdiscF);	
				}
				else 
				{
					value_type tempdiscF=left.peek();
					value_type tempdiscT=center.peek();
					if(( tempdiscF < tempdiscT)==true)
					{
						left.pop();			
						center.push(tempdiscF);	
					}
					else
					{cout<< "\n Invalid Move, Try Again!"<<endl;}
				}
			}
			else
			{cout<< "\n Invalid Move, Try Again!"<<endl;}
		}					
		else if(rFrom==1 && rTo==3)
		{
			if(left.is_Empty()==false)
			{
				if(right.is_Empty()==true)
				{
					value_type tempdiscF=left.peek();
					left.pop();					
					right.push(tempdiscF);	
				}	
				else
				{
					value_type tempdiscF=left.peek();
					value_type tempdiscT=right.peek();
					if(( tempdiscF < tempdiscT)==true)
					{
						left.pop();			
						right.push(tempdiscF);	
					}
					else
					{cout<< "\n Invalid Move, Try Again!"<<endl;}
				}		
			}
			else
			{cout<< "\n Invalid Move, Try Again!"<<endl;}
		}
		else if((rFrom==1 && rTo==1)|| (rFrom==2 && rTo==2)||(rFrom==3 && rTo==3))
		{ cout<<"\n wrong move"<<endl;}
		else if (rFrom==2 && rTo==1)
		{
			if(center.is_Empty()==false)
			{
				if(left.is_Empty()==true)
				{
					value_type tempdiscF=center.peek();
					center.pop();			
					left.push(tempdiscF);	
				}
				else
				{
					value_type tempdiscF=center.peek();
					value_type tempdiscT=left.peek();
					if(( tempdiscF < tempdiscT)==true)
					{
						center.pop();											//remove the head disc or node of the mentioned stack
						left.push(tempdiscF);									//If the above condition is true then move the disc between the mentioned stacks
					}			
					else
					{cout<< "\n Invalid Move, Try Again!"<<endl;}
				}
			}
			else
			{cout<<"\n Invalid Move, Try Again!"<<endl;}
		}
		else if (rFrom==2 && rTo==3)
		{
			if(center.is_Empty()==false)
			{
				if(right.is_Empty()==true)
				{
					value_type tempdiscF=center.peek();
					center.pop();												// remove the head disc or node of the mentioned stack
					right.push(tempdiscF);										//If the above condition is true then move the disc between the mentioned stacks
				}
				else
				{
					value_type tempdiscF=center.peek();
					value_type tempdiscT=right.peek();
					if(( tempdiscF < tempdiscT)==true)
					{
						center.pop();											//remove the head disc or node of the mentioned stack
						right.push(tempdiscF);									//If the above condition is true then move the disc between the mentioned stacks
					}			
					else
					{cout<< "\n Invalid Move, Try Again!"<<endl;}
				}
			}
			else
			{cout<<"\n Invalid Move, Try Again!"<<endl;}
		}
		else if (rFrom==3 && rTo==1)
		{
			if(right.is_Empty()==false)
			{
				if(left.is_Empty()==true)
				{
					value_type tempdiscF=right.peek();
					right.pop();												//remove the head disc or node of the mentioned stack
					left.push(tempdiscF);										//If the above condition is true then move the disc between the mentioned stacks
				}
				else
				{
					value_type tempdiscF=right.peek();							//read the value in the head node
					value_type tempdiscT=left.peek();
					if(( tempdiscF < tempdiscT)==true)
					{
						right.pop();											//remove the head disc or node of the mentioned stack
						left.push(tempdiscF);									//If the above condition is true then move the disc between the mentioned stacks
					}			
					else
					{cout<< "\n Invalid Move, Try Again!"<<endl;}
				}
			}
			else
			{cout<<"\n Invalid Move, Try Again!"<<endl;}
		}
		else if (rFrom==3 && rTo==2)
		{
			if(right.is_Empty()==false)
			{
				if(center.is_Empty()==true)
				{
					value_type tempdiscF=right.peek();								//read the value in the head node
					right.pop();													//remove the head disc or node of the mentioned stack
					center.push(tempdiscF);											//If the above condition is true then move the disc between the mentioned stacks
				}
				else
				{
					value_type tempdiscF=right.peek();
					value_type tempdiscT=center.peek();
					if(( tempdiscF < tempdiscT)==true)
					{
						right.pop();												// take the head disc or node of the mentioned stack
						center.push(tempdiscF);										//If the above condition is true then transfer the disc between the mentioned stacks
					}			
					else
					{cout<< "\n Invalid Move, Try Again!"<<endl;}
				}
			}
			else
			{cout<<"\n Invalid Move, Try Again!"<<endl;}
		}
		else
		{cout<< "Invalid Move, rod number can be only between 1 to 3, please try again!"<<endl;}
	}
	else
	{cout<< "Invalid Move,rod number can be only between 1 to 3, please try again!"<<endl;}
}
					
template <typename value_type>
bool TowerHanoi<value_type>::checkWin()												//function to return boolean value true or false based on the check for the disc in left and center row 
{
	if(left.listLength()==0 && center.listLength()==0)							
		return true;
	else
		return false;
}

template <typename value_type>		
ostream& TowerHanoi<value_type>::printStack(ostream& out)								//Supporting function to return the date in 3 stacks
{ 
	out << "\n" << left<< setw(18)<<"Rod1 \n\n" <<center <<setw(18)<<"Rod2 \n\n"<<right <<setw(18)<<"Rod3 \n\n"<<endl; 	//printing of stacks
	return out;
}

template <typename value_type>
ostream& operator << (ostream &out, TowerHanoi<value_type> &t)
{	return t.printStack(out);}															//Displays the data in the 3 stacks