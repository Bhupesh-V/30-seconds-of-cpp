

Description :
In C++, size() function is used to return the total number of elements present in the map.
Syntax:
map1.size();
// C++ program to illustrate 
// implementation of size() function 


#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // Take any two maps 
    map<int, string> map1, map2; 
      
    // Inserting values 
    map1.insert(make_pair(1, "MANGO")); 
    map1.insert(make_pair(2, "APPLE")); 
      
    // Printing the size 
    cout << "map1 size: " << map1.size();    //Prints 2 as we have entered two values in map1.
    cout << endl; 
    cout << "map2 size: " << map2.size();   //Prints 0 as nothing has been entered in map2.
    return 0; 
} 
