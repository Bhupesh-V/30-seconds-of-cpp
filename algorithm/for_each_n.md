# for_each_n

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
      std::for_each_n(a.begin(), 2, Display()); // Will output, "3 2 "
      
```
**[Run Code](https://rextester.com/CTXL35674)**
