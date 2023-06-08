# count

**Description :** This function is used to determine if an element is in the map. More verbally, this function obtains the number of elements that match a specific key, but since this container (an unordered map) does not allow for duplicates, it only returns either 1 or 0.
So, it returns 1 if the element is in the map, else it returns 0.

**Example** :

```cpp
// Demonstrates count() 

#include <iostream>
#include <string>
#include <unordered_map>

int main (){
    //Creates a map of Spanish Speaking Countries in the Caribbean and calls it SpanishSpeakingCaribbean
    std::unordered_multimap<std::string, std::string> SpanishSpeakingCaribbean = {
        {"Cuba", "Havana"},
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
