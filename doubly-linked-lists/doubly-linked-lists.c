#include <stdio.h>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
//DOUBLY LINKED LISTS
//2 inverted singly linked lists stacked on top of each other

typedef struct node {
	int x;
	struct node* next;
	struct node* previous;		//each node points to both next and previous !!!
} node;



int main(int argc, char** argv) {


	_CrtDumpMemoryLeaks;
	return 0;
}