#include <cmath>
#include <iostream>
#include <vector>
#include <ctime>
#include <random>




const char& n = '\n', t = '\t';


class nNum
{
   public:
    double quarter;
    std::vector<double> negP;

    const std::vector<double>& p = {
        0, 0.00001,0.00002,0.00003,0.00005,0.00007,0.00011,0.00016,0.00023,0.00034,0.00048,0.00069,0.00097,0.00135,0.00187,0.00256,0.00347,0.00466,0.00621,0.00820,0.01072,0.01390,
        0.01786,0.02275,0.02872,0.03593,0.04457,0.05480,0.06681,0.08076,0.09680,0.11507,0.13567,0.15866,0.18406,0.21186,0.24196,0.27425,0.30854,0.34458,
        0.38209,0.42074,0.46017,0.50000,0.50000,0.53983,0.57926,0.61791,0.65542,0.69146,0.72575,0.75804,0.78814,0.81594,0.84134,0.86433,0.88493,0.90320,0.91924,0.93319,0.94520,0.95543,0.96407,0.97128,0.97725,
        0.98214,0.98610,0.98928,0.99180,0.99379,0.99534,0.99653,0.99744,0.99813,0.99865,0.99903,0.99931,0.99952,0.99966,0.99977,0.99984,0.99989,0.99993,0.99995,0.99997,0.99998,0.99999,1

    }; //until z score of 4.2
    

    nNum(const double& m, const double& sd, const double& n) : quarter(sd * 0.25)
    {
        
        
        /*for (int i = 0; i < n; i++) {
            
        };*/
        
   };
    

    double proportion() {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));

        return double(rand()) / RAND_MAX;
    };


    /*double random(const double& max, const double& min)
    {
        srand(time(0));

        return double(std::rand());
        
    };*/
};




int main()
{
    nNum nNum(4, 2, 10);

    std::cout <<  "wdkjkjfldh";
    
    
    std::cin.get();
}


