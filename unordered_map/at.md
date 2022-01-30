# at

**Description :** This function is used to modify values by using key of respective value.

**Example** :

```cpp
// Demonstrates at()
#include <iostream>
#include <string>
#include <unordered_map>

int main(){
    //Initializing a map with values as specified:
    std::unordered_map<std::string, int> mymap = {
        { "First", 100},
        { "Second", 200},
        { "Third", 300 } 
    };

    //Updating values with the help of at() method 
    mymap.at("First") = 50;
    mymap.at("Second") += 500;
    mymap.at("Third") = mymap.at("First") + 950;

    //Printing all three values
    for (auto& x: mymap){
        std::cout << x.first << ": " << x.second << std::endl;
    }

    return 0;
}

```

**[Run Code](https://rextester.com/VEEQ37866)**
