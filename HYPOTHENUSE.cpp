#include <iostream> //WIP
#include <cmath>
using std::cin, std::cout, std::string, std::fill_n, std::isnan, std::stod;
char n = '\n';



class hypothenuse {
    public:
    bool initiate;
    string input[3];
    double number[3];
    char abc[3] = {'a', 'b', 'c'};

    hypothenuse(){
     fill_n(number, 3, 0);
     cout << "Hypothenuse calculator" << n << n << "Note: type x if it's the missing variable." << n << "Also note: put only ONE x." << n << "Continue? Type yes or no, and then press enter." << n << n;
     initiate = false;
     string YON; //input & checks for the yes
     cin >> YON; //
     yesorno(YON); //
    };
    ~hypothenuse(){
    cout<<"FUNCTION END ";
    }
    void yesorno(string check);
    void dataentry();
    //void inputs(string userInput, char position);
};

void hypothenuse::yesorno(string check) {

    if (check == "yes") {
    initiate = true;
    dataentry();
    } else { 
    cout<<"I HATE YOU!!! lets try it again then!!" << n << n; hypothenuse();
    };
};


void hypothenuse::dataentry() {
    int *xValue = new int;
    for(int i=0; i < 3; i++) {
        cout<< "Please enter " << abc[i] << n;
        cin>>input[i];
        if (input[i] == "x") {
            cout<< "Missing variable set! (sus)" << n;
            *xValue = i;
        } else {
            number[i] = stod(input[i]);
        }
    };
    cout << *xValue;
};




int main() {
    hypothenuse *output = new hypothenuse;


}

