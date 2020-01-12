// stacks-84.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Implementation   and    Application

#include "pch.h"
#include <iostream>
#include "mySTACKS.h"
using namespace mySTACKS;

// ListStack

ListStack::Node::Node(int data, Node* next)
	: data(data), next(next)
{ }

ListStack::ListStack() {
	head = NULL;
	std::cerr << "Creating ListStack" << std::endl;
}

int ListStack::pop() {
	int   data = head->data;
	Node* temp = head->next;
	delete head;
	head = temp;
	return data;
}

void ListStack::push(int data) {
	head = new Node(data, head);
}

bool ListStack::empty() {
	return head == NULL;
}

ListStack::~ListStack() {
	std::cerr << "Deleting ListStack" << std::endl;
	while (head) {
		Node* node = head;
		head = head->next;
		std::cerr << " node " << node->data << std::endl;
		delete node;
	}
}

// ArrayStack

ArrayStack::ArrayStack() {
	top = 0;
	arr = new int[100];
	std::cerr << "Creating ArrayStack" << std::endl;
}

void ArrayStack::push(int data) {
	arr[top++] = data;
}

int ArrayStack::pop() {
	return arr[--top];
}

bool ArrayStack::empty() {
	return top == 0;
}

ArrayStack::~ArrayStack() {
	std::cerr << "Deleting ArrayStack with " << top
		<< " elements remaining" << std::endl;
	delete[] arr;
}

// STACK

STACK* STACK::getInstance(int size) {
	if (size > 100)
		return new ListStack();
	else
		return new ArrayStack();
}

int main() {

	mySTACKS::STACK* stack;

	stack = mySTACKS::STACK::getInstance(120);
	stack->push(1);
	stack->push(2);
	stack->push(3);
	stack->push(4);
	std::cout << stack->pop() << " ";
	std::cout << stack->pop() << std::endl;
	delete stack;

	stack = mySTACKS::STACK::getInstance(50);
	stack->push(1);
	stack->push(2);
	stack->push(3);
	stack->push(4);
	std::cout << stack->pop() << " ";
	std::cout << stack->pop() << std::endl;
	delete stack;
}