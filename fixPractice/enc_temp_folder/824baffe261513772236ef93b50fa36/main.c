#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <crtdbg.h>
#include <ctype.h>
#include <stdbool.h>
#define _CRTDBG_MAP_ALLOC

typedef struct node {
	char x;
	struct node* next;

} node;


void push(node** top, char input, bool borend) {
	node* new = malloc(sizeof(node));

	if (new == NULL)
	{
		exit(0);
	};

	new->x = input;


	node* c = *top;
	if (c == NULL)
	{
		*top = new;
		return;
	}
	else if (borend)
	{	//end		, true
		while (c->next != NULL)
		{
			c = c->next;
		}
		new->next = NULL;
		c->next = new;
		return;
	}
	else
	{	//beginning	, false
		new->next = c;
		*top = new;
		return;
	}
}


void pop(node** output, node** stack) {
	if (*stack == NULL)
	{
		return;
	}

	push(output, (*stack)->x, true);

	node* temp = *stack;
	*stack = (*stack)->next;
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
		c = c->next;
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

		c = c->next;
	}
	
	return;
}

void out_print(node* top) {

	if (top == NULL)
	{
		printf("Nothing to output.\n");
		return;
	}


	node* c = top;

	while (c != NULL) {
		printf("%c", c->x);
		c = c->next;
	}
	printf("\n");
	return;
}

int priority(char x) {
	switch (x) {
		case '*': case '/':		return 2; break;
		case '+': case '-':		return 1; break;
		default:				return 0; break; // '('
	}

}



void inToPost(char infix[]) {
		if (infix == NULL) {return;}

	node* stack = NULL; node* out = NULL;
	
	
	char* c = infix;


	for(int i=0; i<strlen(infix); i++) {
		out_print(out);
		
		if (isalnum(infix[i]))
		{
			push(&out, infix[i], true);
			continue;
		} else if (infix[i] == '(')
		{
			push(&stack, '(', false);
			continue;
		}
		else if (infix[i] == ')' && stack != NULL)
		{
			
			while (stack->x != '(')
			{
				pop(&out, &stack);
			}
			continue;
		}
		else
		{
			if (stack != NULL)
			{
				while (priority(stack->x) >= priority(infix[i]));
				{
					pop(&out, &stack);
					printf("fskjfd");
				}
			}
			push(&stack, infix[i], false);
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
	
	//push(&top, '1');
	//push(&top, '2');
	//push(&top, '3');
	//push(&top, '4');
	//pop(&top);
	stack_print(top);

	char* input = "4+4*4+(3+5)"; //stored on the stack
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