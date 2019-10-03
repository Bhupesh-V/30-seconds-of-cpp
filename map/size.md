// Demonstrate map::size() function 
#include <iostream>
#include <map>
using namespace std; 
  
int main() { 

    // initialize container 
    std::map<int, int> mp; 
  
    // insert elements in random order 
    mp.insert({ 1, 10 }); 
    mp.insert({ 2, 20 }); 
    mp.insert({ 3, 30 }); 
    mp.insert({ 4, 40 }); 
    mp.insert({ 5, 50 }); 
    mp.insert({ 6, 60 }); 
  
    // print the total number of elements in map
    std::cout << mp.size() ;
    return 0; 
} 