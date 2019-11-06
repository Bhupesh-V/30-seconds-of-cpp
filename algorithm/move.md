# move

**Description**: Moves the element to the vector permanently. The value is lost after the process.

**Example**:
```cpp
    std::string str1 = "Hello";             
    std::string str2 = "Word";             

    std::vector<std::string> avector;

    avector.push_back (str1);               // copies the first string
    avector.push_back (std::move(str2));    // moves the second string

    std::cout << "Printing the vector: ";
    for (std::string& x:avector) {
        std::cout << ' ' << x;  
    } 
    std::cout << '\n';

    std::cout << "First string after copy: "
              << str1 << std::endl;
    std::cout << "Second string after move: "
              << str2 << std::endl;
```
**[Run Code](https://rextester.com/ENU74789)**