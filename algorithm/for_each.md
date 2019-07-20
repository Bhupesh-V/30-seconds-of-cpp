# for_each 

**Description :**  Applies the given Function Object f to each element of the container in range [first, last)
 
**Example :**
```cpp
       class Display {
        public: 
            void operator() (int i){ 
            std::cout << i << " ";
            }
       };
       
      std::vector<int> a{3,2,3,9};
      // Applying the function object Display to each element of a 
      std::for_each(a.begin(),a.end(), Display()); // Will output, 3 2 3 9
      
```
**[Run Code](https://rextester.com/BNHGL9456)**
