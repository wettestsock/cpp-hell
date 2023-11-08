#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


/*
HASH TABLEEEEESS
implementation  in c

g++ hash-table/hash.c -o hash-table/out
hash-table/out

linked lists : O(n) time complexity to iterate through it
hash tables: try to find element in O(1) time complexity

basically array table with hash function

each element has index
*/

typedef struct {
    char name[256];
    int age;
}person;

unsigned int hash(char* name) {

    return 5;
}

int main(){
    printf("Jacob => %u\n", hash("Jacob"));
    printf("Thomsa => %u\n", hash("Thoma"));
    printf("Joe => %u\n", hash("fdkjs"));
    printf("Jacob => %u\n", hash("fdkj"));

    return 0;
}