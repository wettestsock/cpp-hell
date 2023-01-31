#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
using std::cout, std:: cin, std::string, std::strcpy, std::to_string;
char newLine = '\n';
char& n = newLine;


//defines nCr (combinations)
//calculates to ginormous numbers so a long is used
long nCr(int n,int k)
{ //hi this is a test
    long ans=1;
    k=k>n-k?n-k:k;
    int j=1;
    for(;j<=k;j++,n--) //hiiiii
        if(n%j==0)
        {
            ans*=n/j;
        }else
        if(ans%j==0)
        {
            ans=ans/j*n;
        }else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}

//connects everything together
class bootup {
    public:
    string entry;
    string& strEnt = entry;
    bootup(){
        cout<< "Pascal's triangle calculator" << n << n;
        intCheck();
    }
    
    void intCheck();
    void pascals(int& length);
    string position(int& length);
};

void bootup::intCheck(){
    cout << "----------" << n << "Enter the # of rows:" << n;
    cin >> strEnt;
    //char neg = strEnt.at(0);
    char arr[strEnt.length()];
    strcpy(arr, strEnt.c_str());

    for(int i = 0; i < strEnt.length(); i++) {
        if (isdigit(arr[i])) {
            int c = stoi(strEnt);
            pascals(c);
        } else if (arr[i] == '.' && !isdigit(arr[i++])) {
            cout<< "you thought you could do something here >:(" <<n ;
            i = strEnt.length();
            intCheck();
        } else if (arr[i] == '.') {
            cout<< "DO NOT TYPE A FRACTION!!! CAN'T HAVE AN OF A PASCAL'S TRIANGLE!!" <<n;
            i = strEnt.length();
            intCheck();
        } else {
            cout<< "DO NOT TYPE A STRING!!! THATS MEAN!!" << n;
            i = strEnt.length();
            intCheck();
        }
    };
};


string bootup::position(int& length) {
    double len = length;
    int digits = log10(len) + 1;
    char spaceOutput[digits];
    for(int x = 0; x < length; i++) {
        spaceOutput[x] = 'g';
    };
};

void bootup::pascals(int& length) {
    cout << position(length);
    cout << "----------" << n << n;
    cout << 1 << n;
    for(int z = 1; z < length +1; z++) { //each row
    cout << 1; 
    for(int i = 1; i < z; i++) { //each letter
        cout << " " << nCr((z-1), i) + nCr((z-1),(i-1));
    };
    cout << " " << 1 << '\n';
    };
    cout << "----------" << n << "Calculation complete! Let's do it again!" << n;
    intCheck();

};



int main() {
    // Write C++ code here
    bootup output;
    return 0;
    
    /* backup
        cout << length << n;
    cout << 1 << n;
    for(int z = 1; z < 8; z++) { //each row
    cout << 1; 
    for(int i = 1; i < z; i++) { //each letter
        cout << " " << nCr((z-1), i) + nCr((z-1),(i-1));
    };
    cout << " " << 1 << '\n';
    };
    */
}









