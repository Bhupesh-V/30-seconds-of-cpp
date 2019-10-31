#include <iostream> 
#include <set> 
using namespace std; 
   
int main() 
{ 
    // declaration of set container 
    set<int> myset{1, 2, 3, 4, 5}; 
      
    // using begin() to print set 
    for (auto it=myset.begin(); it != myset.end(); ++it) 
        cout << ' ' << *it; 
    return 0; 
} 
