// nodesimplist-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
BTW,
 If a name a is the name of an object, then to access its memebr named memb we use the „dot” operator:
 a.memb

Suppose now that an object is referred to by the name of a pointer pa which currently points to this object. Then to access its member one uses the „arrow” operator
pa -> memb

*/

/*
In order to extract the address of objects A, B and D, we use the address operator ' &';
for pC we do not do it because it is already a pointer with an address as its value
(the object which is pointed to by pC is on the heap and does not have any name).


*/

#include "pch.h"
#include <iostream>
using namespace std;

struct Node {
	double wdth;
	double hght;
	Node *next;
};

void put_data(Node* n, double s, double w, Node* next);
void print_list(const Node* n); // both normal and reverse functions take only the head.
void print_list_reverse(const Node* n);

int main()
{
	Node A = { 4,44,nullptr };
	Node B, D, *head;
		
	Node* pC = new Node;

	put_data(&B, 3, 33, &A);
	put_data(pC, 2, 22, &B);
	put_data(&D, 1, 11, pC);

	head = &D;

	print_list(head);
	print_list_reverse(head);

	delete pC; // if you used new,dont forget to delete.
}

void put_data(Node* n, double s, double w, Node* next) {
	n->wdth = s;
	n->hght = w;
	n->next = next;
}
/*
 After each iteration, the pointer n, pointing to the current node, 
 is assigned the value of ' n->next', so it points to the next node. 
 The loop terminates when n becomes nullptr — this must eventually happen because the last element 
 (which is A) has nullptr as the value of its next member.

*/
void print_list(const Node* n) {
	for (; n; n = n->next) {
		cout << n->wdth << " " << n->hght << " ;";
		cout << endl;
	}
}

void print_list_reverse(const Node* n) {
	if (n == nullptr) return; // Empty list
	if (n->next != nullptr) //x
		print_list_reverse(n->next);
	cout << n->wdth << " " << n->hght << "; ";

}

/*
For A (the tail), the condition on line "x" becomes false,
so printing is executed and the last incarnation of the function returns to the incarnation invoked for B —
now information on B is printed and the function returns to its incarnation for *pC etc.
We see that traversing the list backwards was ensured by stack rewinding after consecutive returns from the function
*/




