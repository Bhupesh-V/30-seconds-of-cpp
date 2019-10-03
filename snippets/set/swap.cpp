// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Italo Vinicius
    Date : 02/10/2019
    Time : 21:09
    Description : Swap the content of two sets of same type
*/
#include <algorithm>
#include <iostream>
#include <set>

int main(){

    std::set<int> A{21,10,6};  // 6,10,21
    std::set<int> B{56,11,34}; // 11,34,56

    // I want to swap set A with set B 
    A.swap(B);

    // Print the content in set A
    for(std::set<int>::iterator i=A.begin(); i!=A.end(); ++i){
      std::cout << ' ' << *i;
    }
    std::cout << '\n';
    
    // Print the content in set B
    for(std::set<int>::iterator i=B.begin(); i!=B.end(); ++i){
      std::cout << ' ' << *i;
    }
    std::cout << '\n';
    
    return 0;
}