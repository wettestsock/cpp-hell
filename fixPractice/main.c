#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <crtdbg.h>
#define _CRTDBG_MAP_ALLOC

typedef struct node {
	char x;
	struct node* prev;

} node;


void push(node** top, char input) {
	node* new = malloc(sizeof(node));

	if (new == NULL)
	{
		exit(0);
	};

	new->x = input;
	new->prev = *top;
	*top = new;
	return;
}


void pop(node** top) {
	if (*top == NULL)
	{
		return;
	}

	node* temp = *top;
	*top = (*top)->prev; 
	free(temp);
	return;
}

void wipe(node** top) {
	if (*top == NULL)
	{
		return;
	}

	node* c = *top;
	while (c != NULL) {
		node* temp = c;
		c = c->prev;
		free(temp);
	}
	*top = NULL;
	return;
}

void stack_print(node* top) {

	printf("    The stack is: \n");
	node* c = top;

	while (c->prev != NULL) {
		printf("\t  %c\n\t-----\n", c->x);

		c = c->prev;
	}
	printf("\t  %c\n", c->x);
	return;
}



void inToPost(char infix[]) {
	if (infix == NULL)
	{
		return;
	}

	
	//strcpy_s(infix, sizeof(infix), "\0");

	
	
	
	//strcat_s(infix, sizeof(infix), "fdg797");
	
	return;
}

int main(int argc, char* argv[]) {
	node* top = NULL;
	
	push(&top, '1');
	push(&top, '2');
	push(&top, '3');
	push(&top, '4');
	pop(&top);
	stack_print(top);

	char input[] = "43+5554*";

	

	inToPost(input);

	//strcpy_s(post, sizeof(post), input);

	

	printf("%s", input);

	wipe(&top);

	_CrtDumpMemoryLeaks();

	return 0;
}