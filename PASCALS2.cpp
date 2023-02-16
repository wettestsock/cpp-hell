#include <iostream> //made by me and me only (i have no idea what im doing)
#include <iomanip>
#include <cmath>
#include <cstring>
#include <vector>
using std::cout, std:: cin, std::string, std::strcpy, std::to_string, std::vector;

const char& n = '\n';
const string& dash = "----------";
//fjhskfhrfrkgmedkjgvjhg


//defines nCr (combinations)
//calculates to ginormous numbers so a long is used
long nCr(int n,int k) {
    long ans=1;
    k=k>n-k?n-k:k;
    int j=1;
    for(;j<=k;j++,n--) { //hiiiii
        if(n%j==0) {
            ans*=n/j;
        }else if(ans%j==0) {
            ans=ans/j*n;
        }else {
            ans=(ans*n)/j;
        }
    }
    return ans;
};

string position(const int& nor, const int& inv) {
    string p;

    if (nor > 10 && nor < 14) {
        p = "th";
    } else {
    switch(nor % 10) {
        case 1: p= "st"; break;
        case 2: p= "nd"; break;
        case 3: p= "rd"; break;
        default: p= "th";
    };
    };

    vector<char> space;
    for(int i = 0; i < inv; i++) {
        space.push_back(' ');
    };

    string s(space.begin(), space.end());
    return to_string(nor) + p + " position " + s + "---> ";
    
};

//connects everything together
class bootup {
    public:
    
    bootup(){
        cout<< "Pascal's triangle calculator" << n << n;
        intCheck();
        
    };
    
void intCheck(){
    cout << dash << n << "Enter the # of rows:" << n;
    string strEnt;
    cin >> strEnt;
    vector<char> arr(strEnt.begin(), strEnt.end()); 
    
    for(int i = 0; i < arr.size(); i++) {
        if (!isdigit(arr[i]) || arr[i] % 1 != 0) {
            cout<< "STOP MESSING WITH ME! THATS MEAN!!" << n;
            return intCheck();
        }
    };
    return pascals(stoi(strEnt));
   
};

void pascals(const int& length) {
    cout << dash << n << n << position(0, length+1) << 1 << n;

    for(int z = 1, inv = length; z < length+1, inv > 0; z++, inv--) { //each row
        cout << position(z, inv);
        cout << 1; 
        for(int i = 1; i < z; i++) { //each #
         cout << " " << nCr((z-1), i) + nCr((z-1),(i-1));
        };
    cout << " " << 1 << n;
    };
    cout << dash << n <<"Pascal's triangle built!" << n << "I'm so proud of you!" << n << "Let's do it again!" << n;
    intCheck();

};

};

int main() {
    bootup output;
    return 0;
    
}












