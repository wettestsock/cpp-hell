// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
const char& n = '\n';
const char& t = '\t';

class proportions {
public:
    std::vector<double> sales;
    std::string hii = "4.6";

    proportions() {
        std::cout << "Proportion calculator!!" << n << t << "------------"
            << n << n << "Type a value and press enter." << n << "Type done when done." << n << "--------" << n;
        dataInput();
    };


    void dataInput() {
        std::string input;
        double total;
        bool c = 1;
        while (c == 1) {
            std::cout << "| ";
            std::cin >> input;
            if (input == "done") {
                std::cout << "done"; c = 0;
            }
            else if (isNum(input)) {
                sales.push_back(stod(input));
                total += stod(input);
                std::cout << '>' << t << "Value " << sales.size() << " set!" << n;
            }
            else {
                std::cout << '>' << t << "STOP MESSING WITH ME!!! THATS MEAN" << n;
            }
        }
        for (

    };

            bool isNum(std::string& s) {
            for (char& ch : s) {
                if (!isdigit(ch) && ch != '.') {
                    return false;
                }
            }
            return true;
        };
};



int main() {
    proportions hi;
    /*for(int i: sales) {
        count++;
        std::cout << "value #" << count << " set!" << n; */
    std::cin.get();
    return 0;
}







