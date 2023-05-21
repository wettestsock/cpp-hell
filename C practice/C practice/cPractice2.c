#include <stdio.h>
#include <stdbool.h>

int main() {
	printf("ENTER AN UNSIGNED LONG LONG INT NOW OR ELSE \n");



	long long int bigboy = 0;
	(void)scanf("%lld", &bigboy);

	printf("%lld", bigboy);
	return 0;
}