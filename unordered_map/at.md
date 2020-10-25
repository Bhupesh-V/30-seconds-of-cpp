# at

**Description :** Returns a reference to the mapped value of the element with key k in the unordered_map. If k does not match the key of any element in the container, the function throws an out_of_range exception.

**Example** :

```cpp
int main() {
    //declares an empty map. O(1)
    std::unordered_map<char, int> mymap;  
    
    // inserting in to unordered_map with O(1) time on average
    mymap.insert({'A', 1});
    mymap.insert({'B', 2});
    mymap.insert({'C', 3});
  
    // print the content of the keys
    std::cout << "Value in A: " << mymap.at('A') << '\n';
    std::cout << "Value in B: " << mymap.at('B') << '\n';
    std::cout << "Value in C: " << mymap.at('C') << '\n';
}
```
**[Run Code](https://ideone.com/bZriRU)**
