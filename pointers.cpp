#include <iostream> 
#include <cstddef>
#include <cstring>
using std::cout, std::cin, std::string;

#define n '\n'; //DEFINE IS GOOD FOR DEFINING STUFF

//pointer is a specific reference to an object within memory, used typically to find variables outside of a functions scope

/*int main() {
    cout << "what's up";

    int x = 4;
    int * pointerToX = &x;  // int * signifies it is a pointer, and & means it's the ADDRESS OF [x]
    int y = *pointerToX; // * asterisk = the thing pointed to by 

};*/ //why use it? heres an example


int main() { 

    int var = 8;
    //null is no type, only useful for declaring function of an object without changing it afterwards
    //instead have to use the object's type
    //the type determines how many bytes it will be
    void* nullPointer = NULL; //0 is an invalid state for the pointer, same as NULL
    int* actualPointer = &var; //pointer set NOTE: have to make it the same type, can convert it here but still have to make it same type
    cout << "super cool pointer is " << actualPointer << n; //the actual point of the pointer 

    //how to come back tot he var
    *actualPointer = 9; //references back to the original variable the pointer points to

    cout << "the super cool and new and updated variable issss " << *actualPointer << n; //basically accesses the pointer


    //allocate certain memory of a certain size already 
    char* superCoolBuffer = new char[8]; //char is one byte, and new creates an array within the memory slot, of size of 8, 8 bytes
    memset(superCoolBuffer, 0, 8);

    cout << "the super duper mega cool buffer issss " << superCoolBuffer << n;
    delete[] superCoolBuffer;


};