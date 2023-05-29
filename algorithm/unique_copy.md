# unique_copy

**Description** :std::unique_copy is a function from the C++ standard library's algorithm library that creates a new range of elements by copying only the unique elements from the input range while removing consecutive duplicates. It retains the relative order of the unique elements by copying only the first occurrence of each element.

**Example**:
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
     /*------- Number Example----------*/

    std::vector<int> numbers{1, 2, 3, 4, 4, 3, 7, 8, 9, 10};

    std::vector<int> uniqueNumbers;
    std::unique_copy(numbers.begin(), numbers.end(), std::back_inserter(uniqueNumbers));
    //The std::back_inserter iterator is used to append the copied elements to uniqueNumbers.
    
    
    std::cout << "Original numbers: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    std::cout << "\nUnique numbers: ";
    for (const auto& uniqueNum : uniqueNumbers) {
        std::cout << uniqueNum << " ";
    }
    
    /*------- Word Example----------*/
    
     std::vector<std::string> words{"apple", "banana", "banana", "cherry", "apple", "banana"};

    std::vector<std::string> uniqueWords;
    std::unique_copy(words.begin(), words.end(), std::back_inserter(uniqueWords));
    // The std::back_inserter iterator is used to append the copied elements to uniqueWords

    std::cout << "\nOriginal words: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }

    std::cout << "\nUnique words: ";
    for (const auto& uniqueWord : uniqueWords) {
        std::cout << uniqueWord << " ";
    }

    return 0;
}
```
**[Run Code](https://onecompiler.com/cpp/3za2p5k34)**