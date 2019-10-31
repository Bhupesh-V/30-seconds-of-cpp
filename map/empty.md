// Non Empty map example 
// CPP program to illustrate 
// Implementation of empty() function 
#include <iostream> 
#include <map> 
using namespace std; 
  
int main() 
{ 
    map<char, int> mymap; 
    mymap['a'] = 1; 
    mymap['b'] = 2; 
    if (mymap.empty()) { 
        cout << "True"; 
    } 
    else { 
        cout << "False"; 
    } 
    return 0; 
} 
