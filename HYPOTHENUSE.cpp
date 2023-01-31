//FOOLPROOF !!! super duper hypothenuse calculator!!

#include <iostream> 
#include <cmath>
#include <cctype>
#include <cstring>
using std::cin, std::cout, std::string, std::fill_n, std::stod, std::isnan, std::round;
char n = '\n';

class hypothenuse {
    public:
    bool initiate; double number[3]; char abc[3] = {'a', 'b', 'c'};

    hypothenuse(){
     fill_n(number, 3, 0);
     cout << "Hypothenuse calculator" << n << n << "Note: type a letter (like x) if it's the missing variable." << n << "Also note: put only ONE missing variable." << n << "Continue? Type yes or no, and then press enter." << n << n;
     initiate = false;
     string YON; //input & checks for the yes
     cin >> YON; //
     yesorno(YON); //
    };
    ~hypothenuse(){
    data();
    }
    void yesorno(string check);
    void data();
    //void inputs(string userInput, char position);
};


void hypothenuse::yesorno(string check) {


    if (check == "yes") {
    initiate = true;
    data();
    } else {
    cout<<"I HATE YOU!!! lets try it again then!!" << n << n; hypothenuse();
    };
};




void hypothenuse::data() {
    int *xValue = new int;
    *xValue = -2;
    int *charPtr = new int;
        *charPtr = 0;
    do{ //fkdlglkdgkjtn,mn,
    for(int i=0; i < 3; i++) {
        cout<< "Enter " << abc[i] << n;
        string value;
        cin>>value;
        char arr[value.length() + 1];
        strcpy(arr, value.c_str()); // to, from. c_str() to specify it's string

        for(int a=0; a<value.length(); a++) { //note: no +1 because the last is automatically a NULL
            *charPtr += (isdigit(arr[a])) ? 0 : (arr[a] == '.') ? 0 : 1; 
        };
        
        if (*charPtr < 1) { //checks it the value isnt a double
            number[i] = stod(value);
            *charPtr = 0;
        } else if (*charPtr > 1) {
            cout<<"dont you dare type a string!! type again!!" << n << n;
            i--; *charPtr = 0;
        } else if (*xValue > -1) {
            cout<<"YOU ALREADY ASSIGNED A SUS VAR!!" << n << "type again!!" << n;
            i--; *charPtr = 0;
        } else {
            cout<< "Missing variable set! (sus)" << n;
            *xValue = i;
            *charPtr = 0;
        };
    };
    
    if (*xValue < -1) {cout << "NO MISSING SIDE SET!!! type again!!" << n;};
    }while(*xValue < -1);
    
    switch(*xValue) { //the actual math part
        case 0: 
        number[0] = sqrt(pow(number[2], 2) - pow(number[1], 2));
        case 1: 
        number[1] = sqrt(pow(number[2], 2) - pow(number[0], 2));
        case 2: 
        number[2] = sqrt(pow(number[0], 2) + pow(number[1], 2));
    };

    if (isnan(number[*xValue])) {
        cout<< "THE ANSWER IS DUMB AND DIDNT WORK!!!" << n <<  "type again!!" << n;
        data();
    } else {
        string restart;
        cout << "The missing side (" << abc[*xValue] << ") is " << round(number[*xValue] * 100) / 100 << n << "Type anything to try again." << n;

        cin >> restart;

    fill_n(number, 3, 0);
    delete charPtr;
    delete xValue;
    }
};


int main() {
    hypothenuse output;
}