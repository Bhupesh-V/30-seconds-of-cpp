#contains()

**description**

1) Checks if there is an element with key equivalent to key in the container.

2) Checks if there is an element with key that compares equivalent to the value x.
   This overload only participates in overload resolution
   if the qualified-id Compare::is_transparent is valid and denotes a type. It allows calling this function without 
   constructing an instance
   of Key.
   
   **example**
   
   ```
   #include <iostream>
#include <map>
 
int main()
{
    std::map<int,char> example = {{1,'a'},{2,'b'}};
 
    if(example.contains(2)) {
        std::cout << "Found\n";
    } else {
        std::cout << "Not found\n";
    }
}
```
**output**
```
Found
```
