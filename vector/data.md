vector::data()
is an STL in C++ which returns a direct pointer to the memory array used internally by the vector to store its owned elements.

example:-
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // initialising vector 
    vector<int> vec = { 10, 20, 30, 40, 50 }; 
  
    // memory pointer pointing to the 
    // first element 
    int* pos = vec.data(); 
  
    // prints the vector 
    cout << "The vector elements are: "; 
    for (int i = 0; i < vec.size(); ++i) 
        cout << *pos++ << " "; 
  
    return 0; 
} 
