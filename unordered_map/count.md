# Count

**Description :** This function is used to determine if an element is in the map. It returns one if the element is in the map 
else it returns zero.

**Example** :

```cpp
// Demonstrates count() 

#include <iostream>
#include <string>
#include <unordered_map>

int main (){
    //Creates a map of Spanish Speaking Countries in the Caribbean and calls it SpanishSpeakingCaribbean
    std::unordered_multimap<std::string,std::string> SpanishSpeakingCaribbean = {
        {"Cuba","Havana"},
        {"Dominican Republic", "Santo Domingo"},
        {"Puerto Rico", "San Juan"}
		};
       
   //If count returns 0 then the element is not in the map else if it returns 1 it is in the map
   //Average case is linear complexity
   //Worst case is also linear

   if(SpanishSpeakingCaribbean.count("Cuba") > 0)
       std::cout << "This is a Spanish speaking country in the Carribean" << std::endl;
    else
        std::cout << "This is not a Spanish speaking country in the Carribean" << std::endl;
    
    if(SpanishSpeakingCaribbean.count("America") > 0)
        std::cout << "This is a Spanish speaking country in the Carribean" << std::endl;
    else
        std::cout << "This is not a Spanish speaking country in the Carribean" << std::endl;
    
    
    return 0;
}
```
[**Run Code**](https://rextester.com/VEDGOF54462)
