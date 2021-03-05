/*

   Name:         Jax Carstensen
   Semester:     2
   Due:          03/05/2021
   Lab:          Lab 4 (Recursion)
   Description:  Write a program that will reverse the order of a stack.
   For this lab, you will use your stack class and you’re not allowed to use any C++ loops.

*/
#ifndef STACK_H
#define STACK_H


#include "ItemType.h"
#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
	Item* top = NULL;
	int length = 0;
public:
	Stack() {}
	~Stack();
	bool isEmpty();
	//Pre:  None
	//Post: Returns true if the stack is empty, and false if it is not.

	bool isFull();
	//Pre:  None
	//Post: Returns true if the stack is full, and false if it is not

	string visualize();
	//Pre:  None
	//Post: Returns a string visualizing the entire stack

	void Push(ItemType item);
	//Pre:  An item to add to the top of the list
	//Post: Adds the provided item to the top of the list

	void Pop();
	//Pre:  None
	//Post: Removes the item from the top of the stack

	ItemType Top();
	//Pre:  None
	//Post: Returns the item on top of the stack

};
#endif