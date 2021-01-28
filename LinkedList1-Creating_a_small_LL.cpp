// Linked List
// Creating a simple Linked List with 3 nodes
// Creating a Node class
#include <bits/stdc++.h>
using namespace std; 
  
class Node{
	public:
		int data; // data stores the value of each node
		Node* next; // next is of Node type and stores the address of the next node or points to the address of the next node
};

// Creating a simple Linked list with 3 nodes
int main(){
	// Creating three pointers of Node type and initializing them to NULL
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	// Allocating three nodes to the heap
	head = new Node();
	second = new Node();
	third = new Node();
	
	 /* Three blocks have been allocated dynamically.  
    We have pointers to these three blocks as head,  
    second and third      
    head         second         third  
        |             |             |  
        |             |             |  
    +---+-----+     +----+----+     +----+----+  
    | # | # |     | # | # |     | # | # |  
    +---+-----+     +----+----+     +----+----+ */
    
    //Data is random because we haven’t assigned anything yet
	
	//Assigning data in first node
	head->data = 1;
	// Linking first(or head) node to the second node
	head->next = second;
	
	//Assigning data in second node
	second->data = 2;
	
	//Linking second node to the third node
	second->next = third;
	
	 /* data has been assigned to the data part of the second  
    block (block pointed by second). And next  
    pointer of the second block points to the third  
    block. So all three blocks are linked.  
      
    head         second         third  
        |             |             |  
        |             |             |  
    +---+---+     +---+---+     +----+----+  
    | 1 | o----->| 2 | o-----> | # | # |  
    +---+---+     +---+---+     +----+----+     */
    
    //Assigning data to the third(or final) node
    third->data = 3;
    
    //The last node will point to NULL
    third->next = NULL;
    
	/* data has been assigned to the data part of the third  
    block (block pointed by third). And next pointer  
    of the third block is made NULL to indicate  
    that the linked list is terminated here.  
  
    We have the linked list ready.  
  
        head      
            |  
            |  
        +---+---+     +---+---+     +----+------+  
        | 1 | o----->| 2 | o-----> | 3 | NULL |  
        +---+---+     +---+---+     +----+------+ */
		
		return 0;     
      
}
