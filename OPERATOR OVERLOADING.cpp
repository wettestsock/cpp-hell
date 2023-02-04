// Online C++ compiler to run C++ program online
#include <iostream>
const char& n = '\n';

class position{
    public:
    double x=0, y=0;
    position(double newX, double newY) {
       x = newX; y = newY;
    };
    position Add(const position& temp) const { //function which takes a constant position class, const at the end to copy 
        return position(x + this->x, y + this->y); // this refers to temp class
    };
    /* can call the Add function 
    position operator+(const position& temp) const {
        return Add(temp);
    }
    */
    position operator+(const position& temp) const {
        return position(x + this->x, y + this->y);
        //or just call it within this
    }
    position operator+(const double& temp) const {
        return position(x + temp, y + temp);
    }
};

//ostream refers to cout, creates a reference to cout called streamTemp and reference to class called temp


std::ostream& operator<<(std::ostream& streamTemp, const position& temp) {
    streamTemp << temp.x << ", " << temp.y << n << "DEEZ NUTS" <<n; 
    //streamTemp is cout, then x of class instance temp, comma, and y
    return streamTemp;
}



int main() {
    // Write C++ code here
    std::cout << "Hello world!" << '\n';
    position newPos(5.4, 3.5);
    position adding(3.4, 2.3);
    std::cout << "2 classes added: " << newPos + adding;
    std::cout << "double added to the class: " << newPos + 1.3;
    std::cout << " fjsjfkrj";
    return 0;
}


