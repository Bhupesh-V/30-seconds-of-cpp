#include <iostream> 
#include <algorithm> 
#include <vector> 
using namespace std; 
int main() 
{ 

    vector<int> v1; 
    int i; 

    for (i = 0; i < 10; ++i)  
    { 
        v1.push_back(i); 
    } 
      
    vector<int> v2(5, 100); 
 
    std::swap_ranges(v1.begin() + 3, v1.begin() + 7, v2.begin()); 

    for (i = 0; i < 10; ++i)  
    { 
        cout << v1[i] << " "; 
    } 
  
    cout << "\n"; 

    for (i = 0; i < 5; ++i)  
    { 
        cout << v2[i] << " "; 
    } 
  
    return 0; 
} 
