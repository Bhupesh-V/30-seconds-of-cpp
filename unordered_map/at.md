# at

**Description :**  
- This function accepts one parameter which is the key of the unordered_map, and returns a reference to the mapped value of the element with this key.
- If key does not match the key of any element in the unordered_map, the function throws an out_of_range exception. 
  
**Example** :

```cpp
#include <iostream>
#include <unordered_map>

int main(){
    
    //declares a map. O(1)
    std::unordered_map<std::string, int> mymap{
                { "Pepsi", 400},
                { "Coca-Cola", 410},
                { "Sprite", 390 } };
    
    //calling at() when key is present
    mymap.at("Pepsi") += 20;
    mymap.at("Sprite") = mymap.at("Pepsi") + 20;
    
    //calling at() when key is not present
    try { 
        mymap.at("Dew"); 
    }  
  
    catch(const std::out_of_range &e) { 
        std::cout << e.what() << "\n"; //prints - _Map_base::at
    }  
    return 0;
}
```

**[Run Code](https://rextester.com/LCK22669)**
