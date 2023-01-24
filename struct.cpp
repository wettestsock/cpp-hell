#include <iostream> 
#include <cmath> 
//#include "pointers.cpp"      <----- not good, automatically uses all the functions
//

//HAVE TO MAKE THE CLASS THEN CREATE AN INSTANCE OF THAT CLASS AND NAME IT
//THE STRUCT/CLASS ISNT CALLED IN THE PROGRAM UNLESS IT'S ASSIGNED A NAME
struct theThing {
    int x,y; 
    void PrintOut() {std::cout << x << ", " << y << '\n';};

    void converter(double inches) {
        inches *= 2.54;
        std::cout << inches;
    }
};

int main() {
    theThing firstThing;
    firstThing.converter(4); // . is a member access operator
    return 0;
}

