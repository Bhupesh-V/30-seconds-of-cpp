# shuffle

**Description** : Shuffles the elements of a vector in the range of in the range [first, last) with the help of the time seed obtained from chrono library.
The time complexity is linear.

**Example**:
```cpp
    std::vector<int> shuffleme {0,1,2,3,4,5,6,7,8,9};
    // get a time based seed
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    // shuffle the vector with the seed obtained
    std::shuffle(shuffleme.begin(), shuffleme.end(), std::default_random_engine(seed));

    std::cout << "Shuffled elements are : ";
    // iterate through the vector and print the elements
    for(auto element : shuffleme) {
        std::cout << element << " ";
    }
```
**[See Sample code](../snippets/algorithm/shuffle.cpp)**

**[Run Code](https://rextester.com/FSQZZG76463)**

