#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <crtdbg.h>
#define _CRTDBG_MAP_ALLOC

typedef struct node {
	int x;
	struct node* left;
	struct node* right;


} node;

node* create(int value) {
	node* result = malloc(sizeof(node));

	if (result == NULL)
	{
		exit(0);
	}
	result->left = NULL;
	result->right = NULL;
	result->x = value;

	return result;


}

void print(node* root) {

	if (root == NULL)
	{
		printf("empty\n");
		return;
	}

	if (root->left != NULL)
	{
		printf("%d\t", root->left->x);

	}
	if (root->right != NULL)
	{
		printf("%d\t", root->right->x);
	}
	
	}


int main(int argc, char* argv[]) {
	node* n = create(54);
	node* n2 = create(4);
	node* n3 = create(4);
	node* n4 = create(5);
	node* n5 = create(6);
	node* n6 = create(7);
	node* n7 = create(6);

	n->left = n2;
	n->right = n3;
	n3->left = n4;
	n3->right = n5;




}