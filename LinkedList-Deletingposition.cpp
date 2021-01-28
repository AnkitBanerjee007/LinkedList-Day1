// DELETION OF A NODE IN A GIVEN POSITION
//Given a singly linked list and a position, delete a linked list node at the given position.
#include <bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};

//Insert elements
void push(Node** head_ref,int new_data){
	
	Node* new_node = new Node;
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

// Delete node from a particular position
void deleteNode(Node** head_ref,int position){
	
	//Case I: If Linked List is empty
	if(*head_ref == NULL){
		return;
	}
	
	//Store head node in a temporary pointer
	Node* temp = (*head_ref);
	
	//Case II: If we have to remove the first element
	//Make the head point to the second node and delete the first node
	if(position == 0){
		*head_ref = temp->next; //Change Head
		delete temp;//Delete the old head
		return;
	}
	
	//Else find the prev node of the node that is supposed to get deleted
	for(int i=0;temp != NULL && i<position-1;i++){
		temp = temp->next;
	}
	//temp - points to the prev node of the node to be deleted ie temp->next has to be deleted
	
	//If position exceeds the number of nodes
	if(temp == NULL && temp->next == NULL){
		return;
	}
	
	 // Node temp->next is the node to be deleted 
    // Store pointer to the next of node to be deleted
	Node* next = temp->next->next;
	
	// Unlink the node from linked list 
    	delete temp->next;
	
	temp->next = next; //Unlink the deleted node from the linked list
	
}
// This function prints contents of linked list starting from 
// the given node 
void printList(struct Node *node) 
{ 
    while (node != NULL) 
    { 
        printf(" %d ", node->data); 
        node = node->next; 
    } 
} 
  
/* Driver program to test above functions*/
int main() 
{ 
    /* Start with the empty list */
    struct Node* head = NULL; 
  
    push(&head, 7); 
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 2); 
    push(&head, 8); 
  
    puts("Created Linked List: "); 
    printList(head); 
    deleteNode(&head, 4); 
    puts("\nLinked List after Deletion at position 4: "); 
    printList(head); 
    return 0; 
}

