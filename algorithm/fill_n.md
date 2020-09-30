# fill_n

**Description** : Sets a number of elements of a range (i.e, vector) to a value.
The function takes 3 arguments. The iterator of the range, the number of elements
to set starting from the iterator's first element and the new value.

**Example** :
```cpp
    #include <iostream>
    #include <vector>
    #include <algorithm>

    void print_vector(const std::vector<int> &v) {
        // iterate through v and print its elements
        for(auto &elem:v) {
            std::cout << elem << " ";
        }
        std::cout<<std::endl;
    }

    int main() {
        std::vector<int> v = {1,1,1,1,1,1,1,1};

        std::cout << "Before fill_n: ";
        print_vector(v);

        // set the first half of v's elements to zero
        std::fill_n(v.begin(), v.size()/2, 0);

        std::cout << "After  fill_n: ";
        print_vector(v);
        return 0;
    }
```
**[Run Code](https://rextester.com/CIZQZ21473)**
