/*

   Name:         Jax Carstensen
   Semester:     2
   Due:          03/05/2021
   Lab:          Lab 4 (Recursion)
   Description:  Write a program that will reverse the order of a stack.
   For this lab, you will use your stack class and you’re not allowed to use any C++ loops.

*/
#ifndef ITEMTYPE_H
#define ITEMTYPE_H
typedef int type;

enum RelationType {
	LESSER,
	GREATER,
	EQUAL
};

class ItemType {
private:
	type value;
public:
	ItemType() { value = 0; }
	ItemType(type newValue) { value = newValue; }

	RelationType ComparedTo(ItemType otherItem) {
		if (value > otherItem.getValue())
			return GREATER;
		else if (value < otherItem.getValue())
			return LESSER;
		return EQUAL;
	}
	//Pre:  An ItemType to compare to
	//Post: GREATER if this ItemType's value is higher, LESSER if it is lesser, and EQUAL if the values are the same

	void setValue(type newValue) { value = newValue; }
	//Pre:  An int (in this case) to set this item's value to
	//Post: Sets this item's value to the provided one

	type getValue() { return value; }
	//Pre:  None
	//Post: Returns this item's value
};
#endif