# emplace

**Description**: map::emplace() is a function used to insert key-value pairs into the map. The following code demonstrates the 
functionality of emplace function.

**Code**
```
#include <iostream>
#include <string>
#include <map>

int main() {
    // creating a container and inserting values using "emplace" function
    std::map<std::string, int> ages;
    ages.emplace("John", 45);
    ages.emplace("Stan", 65);
    ages.emplace("Mark", 25);
    ages.emplace("Zuck", 30);
    
    std::cout << "Key\tValue\n";
    for(auto i = ages.begin(); i != ages.end(); ++i) {
        std::cout << i->first << "\t" << i->second << "\n";
    }
    
    return 0;
}

```

[**Run Code**](https://rextester.com/HHB79057)
