
#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <numeric> //std::iota (iterator list filler)
using std::iota;
const char& n = '\n';

//RANDOM NUMBER GENERATOR (cool and awesome version)


std::ostream& operator<<(std::ostream& out, const std::vector<int>& temp) {
    for (const int& z : temp) {
        std::cout << z << '\t';
    } std::cout << n;
    return out;
}

int main() {
    // Write C++ code here
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
    for (int i = 0; i >= 0; i++) {
        for (int z = 0; z >= 0; z++) {
            std::cout << "nice cock";
        }
    }
    std::cin.get();
    return 0;
}




