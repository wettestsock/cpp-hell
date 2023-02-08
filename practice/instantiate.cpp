#include <iostream> 
using std::cout;

void printOut(int base) {
for(int i = 0; i < base; i++) {
    for(int z=base; z>-1; z++) {
        cout << ' ';
    };
    for (int j = 0; j < i-1; j++) {
        cout << '*' << ' ';
    };
    cout << '*' << endl;
};
};

main() {
    printOut(5);
};