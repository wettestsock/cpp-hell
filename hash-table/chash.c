#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

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



//initializes the hash table
//pass by reference to an array of pointers
void init_hash(person* (*hash_tb)[]) { //initializes and sets all values to null
    for (int i =0; i< TABLE_SIZE; i++) (*hash_tb)[i] = NULL;
}


int hash( char* name) {
    int hash_val =0;
    while(*name){ //iterates over each char
        hash_val += *name; //pseudorandom key generation
        hash_val = (hash_val * (*name)) % TABLE_SIZE;
        //note: same string will give same key
        *name++;
    } 

    return hash_val;

}   

//passes by value 
//ARRAY OF POINTERS
void print_table(person* hash_tb[]) { 
    
    for(int i=0; i< TABLE_SIZE; i++){
        printf("%i\t", i);
        if(!hash_tb[i]) {
            printf("---\t---\t---\t\n");
            continue;
        }

        printf("%s\t%i\t%i\n", hash_tb[i]->name, hash_tb[i]->age, hash(hash_tb[i]->name));
    
    }
}

//pointer to the array of pointers (to modify)
void insert(person* (*hash_tb)[], char *name_in, const int age_in){
    int index = hash(name_in);
    
    //exception handling
    if((*hash_tb)[index]) {
        //if the hash in the index is already not null
        printf("NO DUPLICATES ALLOWED\n");
        return;
    }
    //allocates new memory for the new person
    person* new = malloc(sizeof(person));
    strcpy(new->name, name_in);
    new->age = age_in;

    (*hash_tb)[index] = new;
}

void clear_hash(person* (*hash_tb)[]){
    for(int i=0; i<TABLE_SIZE; i++) free((*hash_tb)[i]);
}

person* find(person* hash_tb[], char* name){
    int index = hash(name);
    if (hash_tb != NULL && !strcmp(hash_tb[index]->name,name)) return hash_tb[index];
    return NULL;
};

int main(){
    srand(time(0));

    person* ht1[TABLE_SIZE];  //array of pointers to person structs
    //to easy to tell when spot in table is empty
    init_hash(&ht1);

    insert(&ht1, "dskjfns", 44);
    insert(&ht1, "dkd", 44);
    insert(&ht1, "kjj", 44);
    insert(&ht1, "thoma", 44);
    insert(&ht1, "thoma", 44);


    print_table(ht1);

    person* found = find(ht1, "thoma");
    if(found)printf("person has been found\n");

    clear_hash(&ht1);

    return 0;
}