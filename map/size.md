# size

**Description** : size() function returns the number of elements in a map
**Example**:
```cpp
   // creates a map
     std::map<char, int> asciiMap;

     // adds four elements in the map
     asciiMap['A'] = 65;
     asciiMap['B'] = 66;
     asciiMap['C'] = 67;
     asciiMap['D'] = 68;

     // prints the size of the map
     std::cout << "Size of map (asciiMap.size()): " << asciiMap.size() << std::endl;

     // adds two elements in the map
     asciiMap['E'] = 69;
     asciiMap['F'] = 70;

     std::cout << "\nAfter adding two more elements" << std::endl;
     std::cout << "Size of map (asciiMap.size()): " << asciiMap.size() << std::endl;
```
**[Run Code](https://rextester.com/LSR13900)**
