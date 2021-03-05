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
void reverseStack(Stack& stack) {
	stack = reverseStackRecursively(stack, Stack());
}