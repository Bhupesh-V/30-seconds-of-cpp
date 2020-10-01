#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // Declaration 
    unordered_map<string, string> m; 
  
    // Initilisation 
    m = { { "India", "England" }, 
              { "U.S.", "Washington" }, 
              { "France", "Paris" } }; 
  
    // prints the bucket number of the beginning element 
    auto it = m.begin(); 
  
    // stores the bucket number of the key k 
    int number = m.bucket(it->first); 
    cout << "The bucket number of key " << it->first  
                                     << " is " << number; 
  
    return 0; 
}