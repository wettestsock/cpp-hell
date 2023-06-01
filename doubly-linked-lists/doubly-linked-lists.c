#include <stdio.h>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
//DOUBLY LINKED LISTS
//2 inverted singly linked lists stacked on top of each other

typedef struct node {
	int x;
	struct node* next;
	struct node* prev;		//each node points to both next and prev !!!
} node;



void iterate(node* tail) {
	if (tail == NULL)
	{
		exit(0);
	}

	node* c = tail;
	while (c != NULL)
	{
		printf("%s%d", c->prev==NULL? "" : " --> ", c->x);
		c = c->next;
	}
	printf("\n\n");
	return;
}


void iterate_back(node* head) {
	if (head == NULL)
	{
		exit(0);
	}

	node* c = head;
	while (c != NULL) {
		printf("%s%d",c->next==NULL?"":" <-- ", c->x);
		c = c->prev;
	}
	printf("\n\n");
	return;
}



void deallocate(node** tail, node** head) {
	if (*tail == NULL) {
		return;
	}


	node* c = *tail;
	while (c->next != NULL)
	{
		c = c->next; //iterates to the 2nd node
		free(c->prev); //deletes the previous node
	}
	free(c); //deletes the last node

	*tail = NULL; *head = NULL; //makes pointers null
}




void init(node** tail, node** head, int value) { //initialize the doubly linked list

	node* new = malloc(sizeof(node));

	if (new==NULL)
	{
		exit(2); return;
	}

	new->x = value;			//put values into the node
	new->prev = NULL;
	new->next = NULL;

	*tail = new;	//assign node to both tail and head
	*head = new;

}




void insert_beginning(node** tail, int value) {
	node* new = malloc(sizeof(node));
	if (new==NULL)
	{
		return;
	}
	new->x = value;
	new->prev = NULL;
	new->next = *tail;

		(*tail)->prev = new;
	//replaces original tail prev with new (it was null)
	
	
	*tail = new; 
}



void insert_end(node** head, int value) {	//unlike singly linked list, this is done in O(1) notation (constant) meaning it's fast 
	node* new = malloc(sizeof(node));

	if (new==NULL)
	{
		exit(3);
		return;
	}
	new->x = value;
	new->next = NULL;
	new->prev = *head;

	(*head)->next = new; 


	*head = new;   

}

void insert_after(node* theNode, int value) {
	node* new = malloc(sizeof(node));

	if (new==NULL)
	{
		exit(0);
		return;
	}
	new->x = value;
	new->prev = theNode;
	new->next = theNode->next;
	if (theNode->next != NULL) { //if theNode is the head node
		theNode->next->prev = new;
	}
	theNode->next = new;


}



int main(int argc, char** argv) {
	node* tail = NULL;
	node* head = NULL;
	init(&tail, &head, 7);
	

	insert_beginning(&tail, 5);

	


	
	insert_end(&head, 342);

	insert_after(tail->next, 43); //inserts!!

	insert_end(&head, 4);

	iterate(tail);
	iterate_back(head);


	deallocate(&tail, &head);

	_CrtDumpMemoryLeaks();
	return 0;
}