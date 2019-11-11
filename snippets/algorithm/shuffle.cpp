// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Ian Fillipe Pontes Ferreira 
    Date : 06/10/2019
    Time : 20:41
    Description : Rearranges the elements in the range randomly
*/
#include <iostream>     
#include <algorithm>    
#include <array>        
#include <random>       
#include <chrono>       

int main () {
    std::array<int,5> random {1,2,3,4,5}; // 1,2,3,4,5

    // Obtain a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    // Rearranges the elements in the range [first,last) randomly
    shuffle (random.begin(), random.end(), std::default_random_engine(seed));

    std::cout << "Shuffle:";

    // Print the content in array random
    for (int& x: random) std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}