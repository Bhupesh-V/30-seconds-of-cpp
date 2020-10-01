// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Italo Vinicius Pereira Guimaraes
    Date : 01/10/2020
    Time : 18:06
    Description : Selects n elements from a sequence
*/
#include <iostream>
#include <random>
#include <string>
#include <iterator>
#include <algorithm>
 
int main()
{
    //Parameters

        // first, last	-	pair of iterators forming the range from which to make the sampling (the population)
        // out	-	the output iterator where the samples are written. Must not be in the [first;last) range
        // n	-	number of samples to make
        // g	-	the random number generator used as the source of randomness that's the reason why I imported the random library

    std::string in = "ACEGIKMOQSUWY", out;
    std::sample(in.begin(), in.end(), std::back_inserter(out),
                7, std::mt19937{std::random_device{}()});
    std::cout << "Seven random letters out of " << in << " : " << out << '\n';
}