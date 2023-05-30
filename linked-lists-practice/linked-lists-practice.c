#include <stdio.h>


//IMPLEMENTATION OF LINKED LISTS 

typedef struct {
	int data;
	struct node* link;		//can just be node* link; in c++
	// ^ pointer to memory address of the head node (node*)
	//struct node (node) are all elements and pointer to the next element
} node;


int main(){
	node* A = NULL; //empty list 

	node* temp = (node*)malloc(sizeof(node)); //dynamically allocated memory (during runtime)
	//allocates memory of the size of struct node 
	//malloc returns a void pointer of the newly allocated memory , have to explicitly convert to node* 

	(*temp).data = 2;
	(*temp).data = NULL; //because this is first and last node

	return 0;
}