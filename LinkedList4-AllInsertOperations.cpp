// COMPLETE PROGRAM ON INSERTION

#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		Node* next;
		int data;
};

// Given a reference to the head node of a list and an integer data, insert a new node on the front of a list
void push(Node** head_ref, int new_data){
	
	//4 step process
	//Step 1: Allocate a new node
	Node* new_node = new Node();
	
	//Step 2: Put in the data
	new_node->data = new_data;
	
	//Step 3: Make next of new_node as the head node
	new_node->next = (*head_ref);
	
	//Step 4: Make the head point to the new node
	(*head_ref) = new_node;
}

// Given a node prev_node , insert a new node after the given prev_node
void insertAfter(Node* prev_node , int new_data){
	
	//Step 1: Check if the prev_node is NULL
	if(prev_node == NULL){
		cout << "The previous node is NULL";
		return;
	}
	
	//Step 2: Allocate a new node
	Node* new_node = new Node();
	
	//Step 3: Put in the data
	new_node->data = new_data;
	
	//Step 4: Make next of new_node as next of prev_node
	new_node->next = prev_node->next;
	
	//Step 5: Link the prev_node to the new_node 
	prev_node->next = new_node;
}

// Inserting elements at the end of the list or APPEND
//Given a pointer to the head node as head_ref and the data for the new node
void append(Node** head_ref,int new_data){
	
	//Step 1: Allocate new Node
	Node* new_node = new Node();
	
	//Step 2: Put data in the new node
	new_node->data = new_data;
	
	//Step 3: Checking if list is empty then make the new node as head node
	if(*head_ref == NULL){
		*head_ref = new_node;
		return;
	}
	
	//Step 4: Else traverse till the last node
	Node* last = (*head_ref); //Initially last is pointing to the head node
	//Step:5 Traversing till the end
	while(last->next !=NULL){
		last = last->next;
	}
	//Step 6: After reaching the last node , make it point to the new_node
	last->next = new_node;
	return;
}

// Function to print List
void printList(Node* node){
	while(node != NULL){
		cout <<" "<< node->data;
		node = node->next;
	}
}

//Checking the operations.
int main(){
	Node* head = NULL;
	
	append(&head,1);
	
	append(&head,2);
	
	push(&head,3);
	
	push(&head,4);
	
	insertAfter(head->next,9);
	
	printList(head);
	
	return 0;
}

















