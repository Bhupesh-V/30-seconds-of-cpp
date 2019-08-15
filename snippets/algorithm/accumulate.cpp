// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide

/*
 Author : Harsh Raj
 Date : 15/08/2019
 Time : 12:30 AM

 Description : accumulate() function is used to perform certain operations on the range of iterators provided. It takes two iterators and initial value as parameters.
 The function is overloaded with first type accepting only these three arguments and returning sum of all elements that can be iterated using the given iterators while
 the second type takes a binary operation function as additional parameter and performs certain user defined operations on pair of elements pointed by the iterators.

 */

#include <iostream>
#include <numeric>
#include <vector>

    // Note that the fucntion used in accumulate fuction should accept exactly two arguments.
int myFunction(const int &x, const int &y){
    return x * y;
}

int main(){
    // Pre-Populated vector 

    std::vector<int> myVector = {1,2,3,4,5,6};

    // Print the sum of all elements of vector added to 0

    std::cout<< accumulate(myVector.begin(),myVector.end(),0)<<std::endl;


    // Print the product of all elements of vector multiplied to 1
    
    std::cout<< accumulate(myVector.begin(),myVector.end(),1,myFunction)<<std::endl;
}