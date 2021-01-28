// DELETION USING A KEY GIVEN - LINKED LISTS

#include <bits/stdc++.h>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
};

// Inserting a node
void push(Node** head_ref,int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

// Deletes the first occurence of a key in a given linked list
void deleteNode(Node** head_ref,int key){
	// Store the Head pointer in a temp pointer
	Node* temp = (*head_ref);
	//Create a node pointer to point to prev_node
	Node* prev = NULL;
	
	//Case I: When key is in the first or head element
	if(temp != NULL && temp->data == key){
		//Make the head_ref point to the next node
		temp->next=(*head_ref);
		//Delete the space for the old head
		delete temp;
		return; 
	} 
	
	//Case II: Search for the key by checking every node
	while(temp != NULL && temp->data != key){
		 //Traversing in the list
		prev = temp; 
		temp = temp->next;
	}
	
	//If key is not present in the list
	if(temp == NULL) //The end of the List
	{
		return;
	}
	
	//Unlinking the node from the previous List
	prev->next = temp->next;
	
	//Free memory
	delete temp;
	
}
	//Printing the Linked List
	void printList(Node* node)
	{
		while(node != NULL){
			cout<<node->data<<" ";
			node = node->next;
		}
	}
	
	// Driver code 
int main() 
{ 
      
    // Start with the empty list  
    Node* head = NULL; 
  
    // Add elements in linked list 
    push(&head, 7); 
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 2); 
  
    puts("Created Linked List: "); 
    printList(head); 
  
    deleteNode(&head, 1); 
    puts("\nLinked List after Deletion of 1: "); 
      
    printList(head); 
      
    return 0; 
} 
	
	
	
	
	
	
	

