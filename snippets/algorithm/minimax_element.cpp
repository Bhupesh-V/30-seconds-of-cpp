// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Ian Fillipe Pontes Ferreira 
    Date : 07/10/2019
    Time : 19:32
    Description : Returns the smallest and the greatest of the values in array
*/
#include <iostream>     
#include <algorithm>    
#include <array>        

int main () {
    std::array<int,7> foo {3,7,2,9,5,8,6}; // 3,7,2,9,5,8,6

    //  smallest value in the range [first,last) as first element, and the largest as second
    auto result = std::minmax_element (foo.begin(),foo.end());

    // print result:
    std::cout << "min is " << *result.first;
    std::cout << ", at position " << (result.first-foo.begin()) << '\n';
    std::cout << "max is " << *result.second;
    std::cout << ", at position " << (result.second-foo.begin()) << '\n';

    return 0;
}