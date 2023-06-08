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


void pop(node** top, node** stack) {
	if (*top == NULL || *stack == NULL)
	{
		return;
	}

	push(top, (*stack)->x);

	node* temp = *stack;
	*stack = (*stack)->prev;
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

void out_print(node* top) {

	node* c = top;
	while (c != NULL) {
		printf("%c", c->x);
		c =c->prev;
	}

}

int priority(char x) {
	switch (x) {
		case '(':				return 0; break;
		case '+': case '-':		return 1; break;
		case '*': case '/':		return 2; break;
		default:				return 3; break;
	}

}



void inToPost(char* infix) {
		if (infix == NULL) {return;}

	node* stack = NULL; node* out = NULL;
	

	for (int i = 0; i < strlen(infix) + 1; i++) {
		
		if (isalnum(infix[i]))
		{
			push(&out, *(infix + i));
			continue;

		} else if (infix[i] == '(')
		{
			push(&stack, infix[i]);
			continue;
		}
		else if (infix[i] == ')' && stack != NULL)
		{
			node* c = stack;
			while (c->x != '(')
			{
				node* temp = c;
				c = c->prev;
				pop(&out, &temp);

				
			}
		}
		else if (stack != NULL)
		{
			while (priority(stack->x) >= priority(infix[i]));
			{
				pop(&out, &stack);
			}
			push(&stack, infix[i]);
		}

		stack_print(stack);
	}
	out_print(out);
	//strcpy_s(infix, sizeof(infix), "\0");
	
	//strcat_s(infix, sizeof(infix), "fdg797");
	wipe(&stack);
	wipe(&out);
	
	return;
}

int main(int argc, char* argv[]) {
	node* top = NULL;
	
	push(&top, '1');
	push(&top, '2');
	push(&top, '3');
	push(&top, '4');
	//pop(&top);
	stack_print(top);

	char input[] = "4+4*4+(3+5)"; //stored on the stack
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