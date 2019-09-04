# generate
**Description** : Used to generate numbers based upon a generator function, and then, it assigns those values to the elements in the container in the range [first, last).
The generator function has to be defined by the user, and it is called successively for assigning the numbers.

**Example**:
```cpp
    int gen() { 
        static int i = 0; 
        return ++i; 
    } 
  
    int main() { 
        int i; 
        std::vector<int> v1(10); 
  
        std::generate(v1.begin(), v1.end(), gen); 
  
        for (auto value : v1) {
            std::cout << value << " ";
        }

        return 0; 
    } 
```
**[Run Code](https://rextester.com/UVF27948)**
