#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
int main() 
{ 
    int i, j; 
  
    vector<int> v1 = { 1, 2, 3, 4, 5, 3, 3, 6, 7 }; 

    int v2 = 3; 
    vector<int>::iterator i1; 

    i1 = std::search_n(v1.begin(), v1.end(), 2, v2); 
  
    if (i1 != v1.end()) { 
        cout << "v2 is present consecutively 2 times at index "
             << (i1 - v1.begin()); 
    } else { 
        cout << "v2 is not present consecutively 2 times in "
             << "vector v1"; 
    } 
  
    return 0; 
}
