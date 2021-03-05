/*

   Name:         Jax Carstensen
   Semester:     2
   Due:          03/05/2021
   Lab:          Lab 4 (Recursion)
   Description:  Write a program that will reverse the order of a stack.
   For this lab, you will use your stack class and you’re not allowed to use any C++ loops.

*/
#include <iostream>
#include "Stack.h"
#include "Reverse.h"

using namespace std;


int main() {
	Stack stack = Stack();
	for (int i = 0; i < 16; i++)
		stack.Push(i);
	cout << "Original stack:        " << stack.visualize() << endl;
	reverseStack(stack);
	cout << "Stack after reversing: " << stack.visualize() << endl;
	return 0;
}
