#include <stdio.h>

int multiply(int num1, int num2) {
	return num1 * num2;
};

int main(int argc, char* argv[]) {
	printf("two times five is %i <----- ", multiply(2, 5));

}