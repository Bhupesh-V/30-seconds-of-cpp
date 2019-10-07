/*
    Author : Nishanth Sanjeev
    Date : 07/10/2019
    Time : 21:45
    Description : Finding gcd of two numbers, with only a function call
*/

#include<bits/stdc++.h>

int main(){
    int num1 = 18;
    int num2 = 4;
    
    // An example of finding gcd() of these two numbers.
    // The answer returned should be 2, as 2 is the gcd of 18 and 4.
    
    std::cout << "GCD of num1 and num2 = " << __gcd(num1,num2) << endl;
    
    /*
      As can be seen, we do not have to write Euclid's algorithm to find the gcd of two numbers. 
      A simple function call works wonders! 
    */

    return 0;
}
