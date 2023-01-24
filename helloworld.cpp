#include <iostream> //iostream is header file that contains functions, includes input and output operations
#include <cmath> //includes a set of math instructions for c++, excluding the max and min operators
//using namespace std; is used to define the default namespace within the function, not good
//picks variables from a huge list, can overlap

using text_t = std::string; //using, better than typedef, puts something here to declutter the code
//note: _t is usually put to declare an alias or synonym
//using is better because it works better for templates

namespace first { //can declare same x in multiple scopes
    int x = 1;
}
namespace second {
    std::string x = "Whats up \n";
    double xNum = 3;
    double yNum = 4;
    double zNum;
}

void myFuntion() { //function !!!! love function !!
    using namespace second;
    std::cout << x << "MY BALLS BLEW OFF" << '\n';

};

void funny() {
    using std::cout; //can be used to cut down on the stds 
    using std::string;
    string niceee = "nice rooster my guy";
    cout << niceee;
};


int main() { //where the program begins
    using namespace first; //some entity without prefix, assumed the entity is used from that namespace 
    std::cout << "I like pizza" << '\n';                 //std = standard cout = character output    << = mean output or left shift operator                
    std::cout << "I dont like tom\n i hate tom gurr" << std::endl;  //can use \n or std::endl  


    text_t firstName = "tom"; //typedef, declared before the main function
    std::cout << firstName;  //console log



    

    std::string niceee = "whoa cool rooster dude no way frick";
    int x = 5; //integer declaration
    int sum = x + x;
    std::cout << sum << '\n';

    //data types

    int troll = 21; //integer (int): whole numbers, only whole number
    const double price = 4.22; //double (double): number including decimal 
    char grade = 'A'; //character (char): single letter, MUST BE SINGLE QUOTE, A STRING IF DOUBLE QUOTE
    grade = 'C';
    bool student = true;//boolean (bool): true or false

    //string (finally) (std::string)
    const std::string name = "Quandale"; //const makes it so that the variable cannot be changed
    std::cout << name << '\n';

    std::cout << "my grade is a " << grade << '\n'; //string literal
    std::cout << price << '\n';
    std::cout << x << '\n';
    std::cout << second::x << '\n'; //scoped resolution operator, refering to version of x in second namespace

    myFuntion();
    funny(); 
    //const
    const double pi = 3.14; //constant

    //NAMESPACES
    //2 or more entities can share the same name


    // typedef = keyword used to create an additional name to a data type, a new nickname to an existing type
    //helps with readability and reduces typos, HOWEVER, "using" is better because better with templates
    //using [name] = variable 


    //ARITHMETIC OPERATIONS
    // ++ adds 1, += adds the value from the variable (+,-, *, / all work)

    //TYPE CONVERSIONS
    //conveerting one type of var to another, 2 ways of doing so
    //implicit = automatic, converts the value automatically 
    //explicit = precede value with new data type 

    //EXPLICIT
    double pie= (int) 3.14; //takes 3.14 as an integer and then converts it to a double, losing .14 but still being a double
    std::cout << pie; 
    
    char letterNumber = 103; //the char variable can also be represented in the ascii table
    std::cout << letterNumber;

    //explicit example
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100; //common in integer division, or just anywhere that req an int to become a double 
    std::cout << score << "%";



    //MATH FUNCTIONS


    //second::zNum = std::max(second::xNum, second::yNum); //max finds the math, min finds the min
    //second::zNum = pow(second::xNum, 2); //puts a value to a certain power
    //second::zNum = sqrt(second::xNum); //square root of a valu
    //second::zNum = abs(second::xNum); //absolute value 
    //second::zNum = round(second::xNum); //rounds
    //NOTE:: theres ceil and floor, one rounds up and another down
    std::cout << "the number ouputted issssss " << second::zNum << '\n';
    //THERES MUCH MORE LIKE SIN COS AND TAN, look up
    

    //IF STATEMENTS
    //if statemtns are the same as in js

    //SWITCH STATEMENTS
    //switch statements r identical to js

    //TERNANRY STATEMENTS
    //ternary statements r identical to js

    //logical 
    //same as js NOTE: ! is logical not, meaning itll return the opposite of whatever is specified ex (!(condition 1 && condition 2)) ex2 (!condition) returns, if true, the opposite, counting it as failing the conditions
    //NOTE: on booleans, dont need to display == true or false, can just leave it be
     

    //STRING METHODS

    // .length() gives the length of a string
    // .empty() returns a boolean of true or false, of being blank
    // .clear() clears a string
    // .append([string to the end of another string]); //appends something to the string
    // .at([character position]) finds a character at a given position, [string name].length()-1 does the last character
    // .insert([character position, what to put]) inserts an object into a specified character position on the string
    // .find([character]) finds the position of the character
    // .erase(beginning index, ending index) eliminated characters

    //THERES MORE STRING METHODS !!!!!


    //LOOPS
    //while loops, same as in js
    // do/while - does block of code first, then repeats again if condition is true
    /*do{
        something something 
    }while([condition])*/

    //FOR LOOPS
    //same as in js
    for (int i = 1; i <= 3; i++) {
        std::cout << "HAPPY NEW YEAR" << '\n';
        break; //not required, but breaks the loop
        //break is useful in an if statement
        //continue; <----- continues the loop
    };





    text_t bombInstructions;
    std::cout << "enter yo bomb making instructions " << '\n';
    std::getline(std::cin >> std::ws, bombInstructions);

    bombInstructions.append(" in minecraft"); //can be anything, including a variable
    std::cout << "your bomb making instructions are " << bombInstructions << '\n';


       //USER INPUT 

    text_t fullInputName;
    text_t fullInputAddress;
    //instead of cout, use cin 
    std::cout << "whats your grade and home address ";
    std::cin >> grade >> fullInputAddress; //std cin stores input in a variable
    //note: can be put multiple items, separated by a space, where it inputs grade first and then fullInputAddresss
    //BUT cant store anything with space
    std::cout << "your grade is an " << grade << '\n' << "and you live on " << fullInputAddress; 

    //FIX:
    std::cout << "WHATS YOUR FULL LEGAL NAME AND CREDIT CARD NUMBER";
    //PROBLEM ::: PUTTING CIN BEFORE GETLINE MESSES UP THE ORDER
    //fix: std::ws eliminates any white space or blank lines before user input, ws stands for white space
    std::getline(std::cin >> std::ws, fullInputName);  //getline command gets a line from somewhere and puts it in something
    std::cout << "YOUR FULL LEGAL NAME IS " << fullInputName << '\n';



    return 0; //returns the amount of problems, 0 by default
};
