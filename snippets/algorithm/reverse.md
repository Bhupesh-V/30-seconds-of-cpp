/*
    Author : deeksha daga
    Date : 02/10/2019
    Time : 17:30
    Description : to reverse the order of given elements
*/
#include <iostream>
#include <algorithm>

using std::vector;
using std::reverse;
using std::cout;
//to reverse the input
int main() { 
    int i; 
    
    vector<int> v1{1,2,3,4};
          
    reverse(v1.begin(),v1.end());
//this function is used
    vector<int>::iterator i1; 
    
    for (i1 = v1.begin(); i1 != v1.end(); ++i1) { 
        cout << *i1 << " "; 
    } 
    
    return 0; 
} 
