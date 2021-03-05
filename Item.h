/*

   Name:         Jax Carstensen
   Semester:     2
   Due:          03/05/2021
   Lab:          Lab 4 (Recursion)
   Description:  Write a program that will reverse the order of a stack.
   For this lab, you will use your stack class and you’re not allowed to use any C++ loops.

*/
#ifndef ITEM_H
#define ITEM_H

class Item {
private:
	ItemType item;
	Item* next;
public:
	ItemType getItem() {
		//cout << "Getting item" << endl;
		return item;
	}
	//Pre:  None
	//Post: Returns the value this node holds

	void setItem(ItemType newItem) { item = newItem; }
	//Pre:  An ItemType to set this node's value
	//Post: Sets this node's value to the provided ItemType

	Item* getNext() { return next; }
	//Pre:  None
	//Post: Returns the next linked Item

	void setNext(Item* newNext) { next = newNext; }
	//Pre:  An Item to set as the next node
	//Post: Links this node to the next
};
#endif