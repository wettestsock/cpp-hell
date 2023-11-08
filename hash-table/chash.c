#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#define TABLE_SIZE 10
#define STR_SIZE 256

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
    char name[STR_SIZE];
    int age;
}person;




bool init_hash() { //initializes and sets all values to null
    for (int i =0; i< TABLE_SIZE; i++){
        hash_table[i] = NULL;
    }

}

//want different names to return different index
unsigned int hash(char* name) {
    int length = strnlen(name, STR_SIZE);
    unsigned int hash_val = 0;
    for (int i =0; i<length; i++){
        hash_val += name[i];
        hash_val = (hash_val * name[i]) % TABLE_SIZE; 
    } //okay hash function , limits it to 1 through 10
    //ideal hash function will map each element to unique location

    return hash_val;
}

void print_table() {
    
    for(int i=0; i< TABLE_SIZE; i++){
        printf("%i\t", i);

        if(hash_table[i]) printf("%i", hash_table[i]);
        else printf("NULL");

        printf('\n');

    }
}

int main(){

    person* hash_table[TABLE_SIZE];  //array of pointers to the names
    //easy to tell when spot in table is empty
    init_hash();
    print_table();
    printf("Jacob => %u\n", hash("Jacob"));
    printf("Thomsa => %u\n", hash("Thoma"));
    printf("Joe => %u\n", hash("fdkjs"));
    printf("Jacob => %u\n", hash("fdkj"));

    return 0;
}