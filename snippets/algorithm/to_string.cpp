/*
    Author : Nishanth Sanjeev
    Date : 07/10/2019
    Time : 22:57
    Description : A simple function that converts a numerical value to a string.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    // An example of converting an integer value to a string. 
    std::string str1 = std::to_string(3456); 
  
    // An example of converting a float value to a string. 
    std::string str2 = std::to_string(12.19); 
  
    // Printing the strings 
    std::cout << str1 << endl; 
    std::cout << str2 << endl; 
    return 0;
}
