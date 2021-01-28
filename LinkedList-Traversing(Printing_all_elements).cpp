// Linked List traversal
//In the previous program, we have created a simple linked list with three nodes. 
//Let us traverse the created list and print the data of each node. For traversal, let us write a general-purpose function printList() that prints any given list.
#include <bits/stdc++.h>
using namespace std;
// Creating a single Node
class Node {
	public:
		int data;
		Node* next;
};

// Printing every node in the Linked list
void printList(Node* n)
{
	while(n != NULL){ //Checks whether it is the last node of a list
		cout << n->data <<" ";
		n = n->next;
	}
}

int main(){
	//Creating 3 nodes
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	// Allocating nodes to the heap
	head = new Node();
	second = new Node();
	third = new Node();
	
	//Assigning data to each node
	head->data = 1;
	//Linking first node node with second
	head->next = second;
	
	//Assigning data to second node
	second->data = 2;
	//Linking second node with third node
	second->next = third;
	
	//Assigning data to third node
	third->data = 3;
	//The last node points to NULL
	third->next = NULL;
	
	printList(head);
	
	return 0;
	
}
