#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    unordered_map<string, int> mp; 
  
    mp["g"] = 1; 
    mp["e"] = 2; 
    mp["k"] = 4; 
    mp["s"] = 5; 
  
    cout << "Contents of the unordered_map :\n"; 
    for (auto it = mp.cbegin(); it != mp.cend(); it++) 
        cout << it->first << "==>>"
             << it->second << "\n"; 
} 
