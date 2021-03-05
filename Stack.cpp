/*

   Name:         Jax Carstensen
   Semester:     2
   Due:          03/05/2021
   Lab:          Lab 4 (Recursion)
   Description:  Write a program that will reverse the order of a stack.
   For this lab, you will use your stack class and you’re not allowed to use any C++ loops.

*/
#include "Stack.h"

Stack::~Stack() {
	while (!isEmpty())
		Pop();
}

bool Stack::isEmpty() {
	return top == NULL;
}
bool Stack::isFull() {
	Item* location;
	try {
		location = new Item();
		delete location;
		return false;
	}
	catch (bad_alloc exception) {
		return true;
	}
}
string Stack::visualize() {
	string toReturn = "";
	Item* currentItem = top;
	while (currentItem != NULL) {
		toReturn += to_string(currentItem->getItem().getValue()) + " ";
		currentItem = currentItem->getNext();
	}
	return toReturn;
}
void Stack::Push(ItemType item) {
	if (isFull()) return;
	length++;
	Item* newItem = new Item();
	newItem->setItem(item);
	if (isEmpty()) {
		top = newItem;
		return;
	}
	newItem->setNext(top);
	top = newItem;
}
void Stack::Pop() {
	if (isEmpty()) return;
	Item* test;
	test = top->getNext();
	top = test;
	length--;
}
ItemType Stack::Top() {
	if (!isEmpty())
		return top->getItem();
	return NULL;
}
