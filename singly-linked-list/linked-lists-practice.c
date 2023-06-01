#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>










//IMPLEMENTATION OF LINKED LISTS 

typedef struct node {
	int x;
	struct node* next; //c sucks, this stores a pointer to next node
} node;

//--------------------------



//ADDING ELEMENTS TO A LINKED LIST AT THE END ------

void insert_end(node** root, int value) { //double pointer if root pointer needs to be changed what it's pointing to

	node* new = malloc(sizeof(node));
	if (new == NULL)
	{
		exit(1);
	};

	new->x = value;
	new->next = NULL;

	if (*root == NULL)		//why root is a double pointer
	{
		*root = new; 
		return;
	}

	node* c = *root;  //starts at *root
	while (c->next != NULL)
	{
		c = c->next;
	};

	c->next = new;

};

//-------------


//ADDING AT BEGINNING OF A LINKED LIST
//replace the root node to the added node, and link added nodes

void insert_beginning(node** root, int input) { //double pointer if wants to change the root node pointer
	node* new = malloc(sizeof(node));
	if (new==NULL)
	{
		exit(0);
	}

	new->x = input;
	new->next = *root; //if first element is fine because if it is, *root will be null

	*root = new; //replace the root address to new 

}


//--------------------------------------------


//INSERT AFTER 
//copy node, change the value, and change the pointer of the original node


void insert_after(node* n, int value) {  //dont need to change actual pointer
	node* new = malloc(sizeof(node));
	if (new==NULL)
	{
		exit(0);
	}

	new->x = value;
	new->next = n->next; //the new next points to same as the node

	n->next = new;



} 

//----------------

//INSERT SORTED

//smaller or equal than the next
//note: linked list has to be sorted

void insert_sorted(node** root, int value) {
	if (*root == NULL || (*root)->x >= value)
	{
		insert_beginning(root, value);
		return;
	};

	node* c = *root;
	while (c->next != NULL) {
		if (c->next->x >= value)
		{
			break; //breaks the while loop
		}
		c = c->next;
	};
	insert_after(c, value); //inserts element at c (current)

}



//---------


//REMOVING AN ELEMENT FROM LINKED LIST

void remove_element(node** root, int value) { //1st instance of the value
	if (*root == NULL)
	{
		return;
	};

	if ((*root)->x == value) { //exception for root node == value
		node* temp = *root;
		*root = (*root)->next; //original root points to the next element for other operations to work
		free(temp);
		return;
	}


	node* c = *root;
	while (c->next != NULL)
	{
		if (c->next->x == value) {
			node* temp = c->next;
			c->next = c->next->next; //changes pointer of current to point to next value
			free(temp);
			return;
		}

		c = c->next;
	}
};

//DEALLOCATION OF THE LINKED LIST

void deallocate(node** root) {
	//cant just deallocate the memory for the root node , the other nodes are still in memory but cant be accessed

	node* c = *root;
	while (c != NULL) {
		node* temp = c; //makes a pointer to the c
		c = c->next; //switches to the next
		free(temp); //frees memory of temp
	};
	*root = NULL; //dereferences the root memory
};


//------------

//note: all functions can be implemented using either recursion or iteration
//can make anything recursion or iteration



//REVERSING A LINKED LIST
//prev, c, and next

void reverse(node** root) {

	node* prev = NULL; //if list is empty itll automatically be set to null


	node* c = *root;
	while (c != NULL) {
		node* next = c->next;

		c->next = prev; //reversing the arrow

		prev = c;
		c = next; 
	}


	*root = prev;  //cant be c because c is null by the time the for loop is done
}



//---------------------

//FINDING LOOPS/CYCLES IN A LINKED LIST

bool has_loops(node* root) {
	node* slow = root;
	node* fast = root;

	while (slow != NULL && fast != NULL) //fast reaches null faster, so has to check for both slow and fast
	{
		slow = slow->next;
		fast = fast->next->next; //iterates double speed of slow

		if (slow==fast)
		{
			return true;
		}
	}
	return false;

}
//-----------------


//COUNT # OF ELEMENTS

int count(node* root) {
	int count = 0;

	node* c = root;
	while (c != NULL)
	{
		count++;
		c = c->next;
	}
	return count;
}
//-----------------------------------

int count_recursive(node* root) {			//iteration is usually better than recursion
	if (root==NULL) //for final element
	{
		return 0;
	}

	return 1 + count(root->next);
}





void printLL(node** root) {
	node* c = *root; //i=0

	while (c != NULL) { //while (i != NULL)
		printf("\t%d\n", c->x);
		c = c->next; //i++
	};

};


int main(int argc, char* argv[]) {
	node* root = NULL;

	//insert_sorted(&root, 5);			//NEEDS TO BE SORTED
	//insert_sorted(&root, 67);
	//insert_sorted(&root, 32);
	//insert_sorted(&root, 1);
	//insert_sorted(&root, 345);
	//insert_sorted(&root, 434); //if try to run value bigger than all the rest 


	//insert_end(&root, 5); //pass by reference because function needs the place in memory the pointer is stored in (hence, pointing ot a pointer)
	//
	//insert_beginning(&root, 24);
	//insert_beginning(&root, 24);
	//
	//insert_after(root, 7);
	//insert_after(root->next->next, 34532); //1st, 2nd, 3rd element

	insert_end(&root, 2);
	insert_end(&root, 4);
	insert_end(&root, 5);
	insert_end(&root, 6);

	//root->next->next->next->next = root->next; //sets the pointer of the last node to point to head node, thus creating a circular loop

	//reverse(&root);

	if (has_loops(root))
	{
		printf("The linked list has a loop :///\n");
		return 1;
	}
	else
	{
		printf("The linked list does not have a loop :))))))))))))\nThe total # of elements is: %d\n\n", count(root));
		
	}

	printLL(&root);
	
	





	deallocate(&root);
	_CrtDumpMemoryLeaks(); //checks for memory leaks
	return 0;

	//#define _CRTDBG_MAP_ALLOC
	//#include <crtdbg.h>




	//ITERATING THROUGH A LINKED LIST --------------
	/*

	where c = pointer in the node

	BEGINNING:
	node* c = &root;

	ITERATION:
	c = c->next;

	STOP:
	c != NULL;



	*/
	//
	//node* c = &root; //beginning of the iteration
	//while (c != NULL) {
	//	// .... code
	//	printf("----\t %d\n", c->x);
	//
	//
	//	c = c->next;
	//	
	//};
	//
	//for (node* c = &root; c != NULL; c = c->next) {  //for loop works too but is ugly
	//	printf("----\t %d\n", c->x);
	//};
	//
	//------------------------------------------






	return 0;
}