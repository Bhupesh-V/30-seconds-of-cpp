#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // initialising vector 
    vector<int> vec = { 10, 20, 30, 40, 50 }; 
  
    // memory pointer pointing to the first element 
    int* pos = vec.data(); 
  
    // printing the vector 
    cout << "Vector elements : "; 
    for (int i = 0; i < vec.size(); ++i) 
        cout << *pos++ << " "; 
  
    return 0; 
} 