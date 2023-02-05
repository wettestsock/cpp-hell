#include <iostream>
#include <string>

class thing {
    
    public: 
    std::string name;
    int score;
    //constructor, colon, and parameters
    //IMPORTANT !!!! HAS TO BE IN ORDER!!
    thing() : name("Unknown"), score(3) {};
    //note: when declaring inside the constructor without the initializer (in brackets) a string gets used twice 
    // so, the initializer saves performance 
    //basically, if u put name = "unknown", it does name = std::string("unknown") ; 

    thing(const std::string& nameInput) : name(nameInput), score(0) {}; 
    // ^^ replaces the need to set the value in the brackets, basically acts as the default
};

std::ostream& operator<<(std::ostream& stream, const thing& tempThing) {
    stream << tempThing.name << tempThing.score;
    return stream;
}

main() {
    thing e;
    std::cout << e;
}