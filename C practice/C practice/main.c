#include <stdio.h>
#include <stdlib.h>
#include "header.h"




int main(int argc, char *argv[]) {
	printf("fdjvklhjgfklhjk %i fgdfg\n", multiply(2, 5));
	int i;

	char *str = dynamicStr();
	printf("The dynamically allocated string literla youve just input is : %s\n",str);
	free(str);
	

	char *string = "swag in south campton";
	/*
	for (char c  = *string; c!='\0'; *string++)
	{
		printf("%c",c);
	}
	*/
	while (*string)
	{
		printf("%c",*string);
		*string++;
	}
}
