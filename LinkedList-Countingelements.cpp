// Finding Length of a Linked List - Iterative way

#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

//Insertion Operation
void push(Node** head_ref,int new_data){
	
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	*head_ref = new_node;
}

//Iterative Solution
//1) Initialize count as 0 
//2) Initialize a node pointer, current = head.
//3) Do following while current is not NULL
//     a) current = current -> next
//     b) count++;
//4) Return count 

int getCount(Node* head){
	
	int count = 0; // To count the elements
	Node* current = head; //Make a Pointer to point to the head initially
	while(current != NULL){
		count++;
		current = current->next;
	}
	return count;
}

//Driver function
int main(){
	/* Start with the empty list */
    Node* head = NULL;  
  
    /* Use push() to construct below list  
    1->2->1->3->1 */
    push(&head, 1);  
    push(&head, 3);  
    push(&head, 1);  
    push(&head, 2);  
    push(&head, 1);  
  
    /* Check the count function */
    cout<<"count of nodes is "<< getCount(head);  
    return 0;  
}
