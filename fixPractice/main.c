#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <crtdbg.h>
#include <ctype.h>
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

	printf("    The stack is: \n\t-------\n");
	node* c = top;

	while (c != NULL) {
		printf("\t|  %c  |\n\t-------\n", c->x);

		c = c->prev;
	}
	
	return;
}

void output_print(node* top) {

	node* c = top;
	while (c != NULL) {
		printf("%c", c->x);
		c =c->prev;
	}

}


void sort(char c) {


}


void inToPost(char* infix) {
	if (infix == NULL)
	{
		return;
	}

	char op[] = "-+/*^)(";

	node* stack = NULL;
	node* output = NULL;

	for (int i = 0; i < strlen(infix) + 1; i++) {
		switch (infix[i])
		{
		case '(': push(&stack, infix[i]); break;
		case ')': break;





		default:
			push(&output, *(infix + i));
			break;
		}



		



	}
	output_print(output);
	//strcpy_s(infix, sizeof(infix), "\0");

	
	
	
	//strcat_s(infix, sizeof(infix), "fdg797");
	free(stack);
	free(output);
	
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

	char input[] = "(43+5554*)"; //stored on the stack
	//char* input = "fdfdsfdgf"; //stored somewhere in memory , points to first character, can input++
	//if dereferenced itll give the pointer of the first char, hence can increment
	//only use for read-only
	

	inToPost(input);

	//strcpy_s(post, sizeof(post), input);

	

	//printf("%s", input);

	wipe(&top);

	_CrtDumpMemoryLeaks();

	return 0;
}