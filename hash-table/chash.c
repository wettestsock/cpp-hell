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
    
    printf("index\tname\tage\n");
    for(int i=0; i< TABLE_SIZE; i++){
        printf("%i\t", i);
        if(!hash_tb[i]) {
            printf("---\t---\n");
            continue;
        } else printf("%s\t%i\n", hash_tb[i]->name, hash_tb[i]->age);
    
    }
}


//pointer to the array of pointers (to modify)
void insert(person* (*hash_tb)[], char *name_in, const int age_in){
    int index = hash(name_in);
    
    //allocates new memory for the new person
    person* new = malloc(sizeof(person));
    strcpy(new->name, name_in);
    new->age = age_in;
    

    //LINEAR PROBING
    for(int i=index; i<TABLE_SIZE; i++){
        if((*hash_tb)[i]==NULL) {
            (*hash_tb)[i] = new;
            return;
        }
    }
    for(int i =0; i<index; i++){
        if((*hash_tb)[i]==NULL) {
            (*hash_tb)[i] = new;
            return; 
        }
    }
    
    printf("HASHMAP IS FULL\n");
    
}

void clear_hash(person* (*hash_tb)[]){
    for(int i=0; i<TABLE_SIZE; i++) {
        //NOTE: free frees the memory block (free)
        // the pointer to that memory block then needs to be set to null (assigning null)
        

        free((*hash_tb)[i]);
        (*hash_tb)[i] = NULL;
    }
}

person* find(person* hash_tb[], char* name){
    int index = hash(name);
    if (hash_tb != NULL && !strcmp(hash_tb[index]->name,name)) return hash_tb[index];
    return NULL;
};

void remove_hash(person* (*hash_tb)[], char* name) {
    free((*hash_tb)[hash(name)]);
    (*hash_tb)[hash(name)] = NULL;
}

int main(){
    srand(time(0));

    person* ht1[TABLE_SIZE];  //array of pointers to person structs
    //to easy to tell when spot in table is empty
    init_hash(&ht1);

    insert(&ht1, "dskjfns", 44);
    insert(&ht1, "dkd", 44);
    insert(&ht1, "kjj", 44);
    insert(&ht1, "dsff", 44);
    insert(&ht1, "1111", 44);
    insert(&ht1, "1111", 44);
    print_table(ht1);

    person* found = find(ht1, "thoma");
    if(found)printf("person has been found\n");

    clear_hash(&ht1);

    return 0;
}