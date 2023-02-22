
#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <cmath>

const char& n = '\n', t = '\t';

class proportions {
public:

    proportions() {
        std::cout << "Proportion calculator!!" << n << t << "------------"
            << n << n << "Type a value and press enter." << n << "Type done when done." << n << "--------" << n;
        dataInput();
    };


    void dataInput() {
        std::vector<double> values;
        std::string input;
        bool c = 1;

        while (c == 1) {
            std::cout << "| ";
            std::cin >> input;
            if (input == "done") {
                c = 0;
            } else if (isNum(input)) {
                values.push_back(stod(input));
                std::cout << '>' << t << "Value " << values.size() << " set!" << n;
            } else {
                std::cout << '>' << t << "STOP MESSING WITH ME!!! THATS MEAN" << n;
            }
        };

        const double& total = std::accumulate(values.begin(), values.end(), 0);

        
        for (int i = 0; i < values.size(); i++) {
                std::cout << "The p of " << values[i] << " (Value " << i+1  << ") is " << std::ceil((values[i] / total) * 1000) / 1000 << t;
                if (i % 2 != 0) { std::cout << n; };
        };

        


    };

    const bool isNum(std::string& s) {
        for (const char& ch : s) {
            if (!isdigit(ch) && ch != '.') {
                return false;
            }
        };
        return true;
    };
         
};



int main() {
    proportions hi;
    /*for(int i: values) {
        count++;
        std::cout << "value #" << count << " set!" << n; */
    std::cin.get();
    return 0;
}