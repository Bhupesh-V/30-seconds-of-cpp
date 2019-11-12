// Demonstrates empty() 
#include <iostream> 
#include <map> 
  
int main() { 
    // declaration of map container 
    std::map<char, int> mymap; 
    mymap['a'] = 1; 
    mymap['b'] = 2; 
    mymap['c'] = 3; 
  
    // using empty() to check map is empty or not
   if(mymap.empty()==true)
        printf("my map is empty\n");
   else
        printf("my map is not empty\n");
    return 0; 
} 
