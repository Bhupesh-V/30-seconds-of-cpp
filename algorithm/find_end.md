# find_end

**Description** : The C++ function `std::find_end` returns the iterator to the beginning of last occurrence of the sequence `[s_first, s_last)` in range `[first, last)` if the sequence is found else it returns `last`.

**Example :**

```cpp
    int main(){
        std::vector<int> vec1 {10, 20, 1, 2, 30, 40, 1, 2, 50, 60};
        std::vector<int> vec2 {1, 2};

        auto result = std::find_end(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());  //find last occurance of sequence [1,2] in the vector vec1
        if(result == vec1.end()){
            std::cout << "Sequence not found!" << "\n";
        }
        else{
            std::cout << "Last occurance of the sequence starts at position " << std::distance(vec1.begin(), result) << "\n";
        }

        return 0;
    }
```

**[Run Code](https://rextester.com/DVA38054)**