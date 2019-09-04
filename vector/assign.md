# assign

**Description** : Overwrites the contents of a vector.

Two variations:

1. Assigns the vector's contents to `n` copies of a value.
2. Assigns the vector to a copy of the elements in a given iterator range.

**Example**:
```cpp
    std::vector<int> example;
    // example is empty: { }

    // Overwrite to larger vector with 5 copies of 42
    example.assign(5, 42);
    // example is now: { 42, 42, 42, 42, 42 }

    // From another vector, assign using the range [ third, end )
    std::vector<int> sequence = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    example.assign(sequence.begin() + 2, sequence.end());
    // example is now: { 3, 4, 5, 6, 7, 8, 9, 10 }

    // From the same vector, assign using the range [ first, third )
    example.assign(example.begin(), example.begin() + 2);
    // example is now: { 3, 4 }

    // Overwrite to smaller vector with 3 copies of 0
    example.assign(3, 0);
    // example is now: { 0, 0, 0 }
```
**[See Sample code](../snippets/vector/assign.cpp)**
**[Run Code](https://rextester.com/LWBW83885)**
