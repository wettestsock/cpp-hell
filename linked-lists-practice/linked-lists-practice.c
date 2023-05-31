#include <stdio.h>
#include <stdlib.h>
#include <string.h>










//IMPLEMENTATION OF LINKED LISTS 

typedef struct node {
	int x;
	struct node* next; //c sucks, this stores a pointer to next node
} node;

//--------------------------



//ADDING ELEMENTS TO A LINKED LIST ------

void insert_end(node** root, int value) {
	//get to the last node and change the null pointer to the new pointer

	node* new = malloc(sizeof(node));

	if (new == NULL)
	{
		exit(1); //closes the program if new is null, just failcheck
		//as if return 1 in main
	};


	new->x = value; //the insert node
	new->next = NULL; //because new node is added to the end
	
	//double pointer is a pointer to a pointer which points to node


	//what if the root is null???
	if (*root == NULL) 
	{
		*root = new;  //simply places the new node (with int value) as the root element (1st)
		return; //returns the void function
	}



	node* current = *root; //dereference root once for the pointer 
	//starts at *root
	while (current->next != NULL)
	{
		current = current->next;
	};
	//exits knowing current pointer is null (pointer next of last element in a linked list)

	current->next = new; //changes the address to the new node, which has the value ineger and a next to null

};

//-------------

void printLL(node** root) {
	node* current = *root; //i=0

	while (current != NULL) { //while (i != NULL)
		printf("\t%d\n", current->x);
		current = current->next; //i++
	};

};


int main(int argc, char* argv[]) {
	node* root = malloc(sizeof(node)); //dynamically allocated on the heap
	if (root == NULL)
	{
		exit(2); //very important because it's difficult to track down
	};


	root->x = 15; //1st, head node
	root->next = NULL;

	insert_end(&root, 5); //pass by reference because function needs the place in memory the pointer is stored in (hence, pointing ot a pointer)
	


	printLL(&root);




	//ITERATING THROUGH A LINKED LIST --------------
	/*

	where current = pointer in the node

	BEGINNING:
	node* current = &root;

	ITERATION:
	current = current->next;

	STOP:
	current != NULL;



	*/
	//
	//node* current = &root; //beginning of the iteration
	//while (current != NULL) {
	//	// .... code
	//	printf("----\t %d\n", current->x);
	//
	//
	//	current = current->next;
	//	
	//};
	//
	//for (node* current = &root; current != NULL; current = current->next) {  //for loop works too but is ugly
	//	printf("----\t %d\n", current->x);
	//};
	//
	//------------------------------------------





	free(root); //because the dynamically allocated memory needs to be released manually


	return 0;
}