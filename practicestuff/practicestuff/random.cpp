
#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <numeric> //std::iota (iterator list filler)
using std::iota;
static const char& n = '\n'; //static meaning only stored in memory once

//RANDOM NUMBER GENERATOR (cool and awesome version)


std::ostream& operator<<(std::ostream& out, const std::vector<int>& temp) {
    for (const int& z : temp) {
        std::cout << z << '\t';
    } std::cout << n;
    return out;
}

int main() {
    // Write C++ code here


    //STATIC -------------
    static int i;

    //^^ space for the variable is allocated only once per execution, and cannot be created more than once
    //cant have class with different int i's;

    FILE* pfGet;
    
    fopen_s(&pfGet, "test.txt", "r"); //fopen but in c++

    if (pfGet!=NULL) 
    {
        std::cout << "get tf outta here loser";
    }
    else
    {
        std::cout << "no file found\n";
    }



    std::cout << "Hello world!" << n;
    std::random_device random; //this is the source of randomness
    std::uniform_int_distribution<int> dist(1, 9);
    std::cout << dist(random) << n;
    //^^^ random integer value
    std::uniform_real_distribution<double> funny(1.0, 9.0);
    std::cout << funny(random) << n;
    //^^^ random real values 

    std::vector<int> coolVector(10);
    std::iota(coolVector.begin(), coolVector.end(), 5);
    // ^^^ iota, part of algorithm library, fills an array from beginning to end, with starting value specified, here it's 5

    std::shuffle(coolVector.begin(), coolVector.end(), random);
    //shuffle randomly shuffles the elements
    std::cout << coolVector;
    

    std::string name;
    std::cin >> name;
    std::cout << name;
    std::cin.get();
    return 0;
}




