# swap

**Description** :This function can rearranges the elements in the range randomly

**Example**:
```cpp
    // Creating array of size 5
    std::array<int,5> random {1,2,3,4,5}; // 1,2,3,4,5

    // Obtain a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    // Rearranges the elements in the range [first,last) randomly
    shuffle (random.begin(), random.end(), std::default_random_engine(seed));

    std::cout << "Shuffle:";

    // Print the content in array random
    for (int& x: random) std::cout << ' ' << x;
    std::cout << '\n';
```
**[See Sample code](../snippets/algorithm/shuffle.cpp)**
**[Run Code](https://rextester.com/NNI79837)**