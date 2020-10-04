#include <iostream>
#include <unordered_map>
#include <string>

  
int main() 
{ 
    // Declaration 
   std::unordered_map<std::string, std::string> m; 
  
    // Initilisation 
    m = { { "India", "England" }, 
              { "U.S.", "Washington" }, 
              { "France", "Paris" } }; 
  
    // prints the bucket number of the beginning element 
   auto it = m.begin(); 
  
    // stores the bucket number of the key k 
    int number = m.bucket(it->first); 
    std::cout << "The bucket number of key " << it->first  
                                     << " is " << number; 
  
    return 0; 
}