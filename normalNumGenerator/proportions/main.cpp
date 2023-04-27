#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

const char& n = '\n', t = '\t';


class nNum
{
   public:
    const std::vector<double>& ztable = {
1, //for any range between 1 and 0.5
0.5, //0sds
0.46017, //0.1
0.42074, //0.2
0.38209, //...
0.34458,
0.30854,
0.27425,
0.24196,
0.21186,
0.18406,
0.15866,
0.13567,
0.11507,
0.0968,
0.08076,
0.06681,
0.0548,
0.04457,
0.03593,
0.02872,
0.02275,
0.01786,
0.0139,
0.01072,
0.0082,
0.00621,
0.00466,
0.00347,
0.00256,
0.00187,
0.00135,
0.00097,
0.00069,
0.00048,
0.00034,
0.00023,
0.00016,
0.00011,
0.00007,
0.00005,
0.00003,
0.00002,
0.00001, //4.2sds
0 //4.3 sds
    };
    
    std::vector<double> filteredList;
    
    nNum(const double& m, const double& sd, const double& n)
    {
        for (int i = 0; i < n; i++) {
            const double& pr = p();
            const double& nORp = p();
            
            
            for(int s=0; s<ztable.size(); s++) {
                if(ztable[s] >= pr && pr >= ztable[s+1]) {
                double setValue = random(sd*(((double)s-1)/10), sd*((double)s/10));
                //setValue = round(setValue); 
                // ^ rounds 2 spaces, this rounds to a whole number
                
                filteredList.push_back((nORp > 0.5) ? m+ setValue : m- setValue);
                break;
                };
            };
        };
        sort(filteredList.begin(), filteredList.end());
        
   };
  
    
    //generates random proportion
    double p() {
        return static_cast <float> (rand()) / ( static_cast <float> (RAND_MAX)); 
    };

    //random number generator, rounds to 2 decimal places
    double random(const double& min, const double& max)
    {
        
        return round((min + static_cast <double> (rand()) / ( static_cast <double> (RAND_MAX/(max-min))))*100)/100; 
        
        
    };
};

std::ostream& operator<<(std::ostream& out, const std::vector<double>& temp) {
        for(const double tempVal : temp) {
            out << tempVal<< ' ';
        };
        return out;
    
};



int main()
{
    srand(time(0));
    //inputs mean, sd, and number of times to ooutput
    nNum lol(10, 2, 100);
    
    //note: the higher the sd, the more the values will vary.
    std::cout<< lol.filteredList;
    std::cin.get();
}












