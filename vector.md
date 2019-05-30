# ``<vector>``

<details>
<summary>View contents</summary>

<ol>
    <li><a href="#at-vector"><code>at</code></a></li>
    <li><a href="#end-vector"><code>end</code></a></li>
    <li><a href="#back-vector"><code>back</code></a></li>
    <li><a href="#cend-vector"><code>cend</code></a></li>
    <li><a href="#data-vector"><code>data</code></a></li>
    <li><a href="#rend-vector"><code>rend</code></a></li>
    <li><a href="#size-vector"><code>size</code></a></li>
    <li><a href="#swap-vector"><code>swap</code></a></li>
    <li><a href="#begin-vector"><code>begin</code></a></li>
    <li><a href="#clear-vector"><code>clear</code></a></li>
    <li><a href="#crend-vector"><code>crend</code></a></li>
    <li><a href="#empty-vector"><code>empty</code></a></li>
    <li><a href="#erase-vector"><code>erase</code></a></li>
    <li><a href="#front-vector"><code>front</code></a></li>
    <li><a href="#assign-vector"><code>assign</code></a></li>
    <li><a href="#cbegin-vector"><code>cbegin</code></a></li>
    <li><a href="#insert-vector"><code>insert</code></a></li>
    <li><a href="#rbegin-vector"><code>rbegin</code></a></li>
    <li><a href="#resize-vector"><code>resize</code></a></li>
    <li><a href="#vector"><code>vector</code></a></li>
    <li><a href="#crbegin-vector"><code>crbegin</code></a></li>
    <li><a href="#emplace-vector"><code>emplace</code></a></li>
    <li><a href="#reserve-vector"><code>reserve</code></a></li>
    <li><a href="#~vector"><code>~vector</code></a></li>
    <li><a href="#capacity-vector"><code>capacity</code></a></li>
    <li><a href="#max_size-vector"><code>max_size</code></a></li>
    <li><a href="#pop_back-vector"><code>pop_back</code></a></li>
    <li><a href="#emplace_back-vector"><code>emplace_back</code></a></li>
    <li><a href="#get_allocator-vector"><code>get_allocator</code></a></li>
    <li><a href="#shrink_to_fit-vector"><code>shrink_to_fit</code></a>
</ol>
</details>

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
[See Sample code](vector/assign.cpp)
[Run Code](https://rextester.com/LWBW83885)

# erase
**Description** : Erases the specified elements from the vector.

Two variations:

1. Removes the element at position.
2. Removes the elements in the range [first, last).

**Example**:
```cpp
    std::vector<int> vector1;

    vector1 = {1,2,3,4,5,6,7,8,9};
    // print(vector1);

    // Remove 1st Element
    vector1.erase(vector1.begin());

    // Remove range of elements
    vector1.erase(vector1.begin()+2,vector1.begin()+5);

    // Bonus Example
    // Remove element with value 'valueToRemove' from vector 'vector1'
    // Using 'algorithm' C++ STL library to remove a specific value
    int valueToRemove = 7;
    std::vector<int> vector2 = { 5,6,1,7,12,3,7,9,7,2};
    vector2.erase( std::remove(vector2.begin(),vector2.end(),valueToRemove),vector2.end());

```
[See Sample code](vector/erase.cpp)
[Run Code](https://rextester.com/XWYI46957)
