// c++ vectors
#include <iostream>
#include <string>
#include <vector>
using std::vector, std::cout, std::cin;
char n = '\n';



//vector - array but better
int main() {
    vector<int> v1 = {1,2,3,4,5,6};
    
    v1.pop_back();  //deletes the last element in the array
    v1.pop_back(); //note: the size is smaller but capacity doesnt change
    v1.pop_back();
    
    v1.shrink_to_fit(); //shrinks the capacity size to fit the vector so the capacity is equal to the size
    
    cout << "2nd element: " << v1[2] << n << "front: " << v1.front() << n << "back: " << v1.back() << n;
    
    v1.erase(v1.begin());
    //front and back are self explanatory
    cout << "size: " << v1.size() << n; //amount of elements it holds
    cout << "capacity: " << v1.capacity() << n; //amount of elements it can hold
    
    v1.push_back(743); //adds to the end
    cout << v1[3] << n; //added $ to the end
    //NOTE : every time the array length reaches its limit, the capacity(amount it can hold) doubles 
    
    v1.insert(v1.begin(), 5); //the position and then the new element
    //NOTE: CANT USE INDEX ON THE INSERT OR ERASE
    
    cout << "changed element at index of 0 is: " << v1[1];
    return 0; 
}
