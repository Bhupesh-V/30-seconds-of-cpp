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

# emplace_back
**Description :**  Constructs a new vector element using the argument value passed, and appends it to the end of the vector.
  
**Example** :

```cpp
    std::vector<int> v{ 1, 2, 3 };
    
    // append 4 to the existing vector using emplace_back
    v.emplace_back(4);
