// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Dennis Weng Han Ong
    Date : 6/10/2019
    Time : 19:30
    Description : vector function crbegin() is used to reverse vector iterations
*/


#include <iostream>
#include <algorithm>
#include <vector>


int main (){ 
    // initializing vector with values 
    std::vector<int> vect = {10, 20, 30, 40, 50}; 
  
    // for loop with crbegin and crend to print results
    
    for (auto i = vect.crbegin(); i != vect.crend(); i++){ 
    std::cout << ' ' << *i;  
    }
    
    std:: cout << '\n';
}