/*

   Name:         Jax Carstensen
   Semester:     2
   Due:          03/05/2021
   Lab:          Lab 4 (Recursion)
   Description:  Write a program that will reverse the order of a stack.
   For this lab, you will use your stack class and you’re not allowed to use any C++ loops.

*/
#pragma once
#include <iostream>
#include "Stack.h"

using namespace std;

Stack reverseStackRecursively(Stack stack, Stack stack2) {
	stack2.Push(stack.Top());
	stack.Pop();
	if (stack.isEmpty())
		return stack2;
	return reverseStackRecursively(stack, stack2);
}
//Pre:  The stack you want to reverse, and the placeholder stack that will become the reversed version of the first
//Post: Returns the second stack with the top of the first one


//Basically just makes reversing the stack slightly easier for the user by requiring just one parameter
void reverseStack(Stack& stack) {
	stack = reverseStackRecursively(stack, Stack());
}
//Pre:  The stack you want to reverse
//Post: Sets the stack you provided to the reversed version of it
