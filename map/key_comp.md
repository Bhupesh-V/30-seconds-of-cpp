# back

**Description** : The map::key_comp( ) is a function which comes under <map> header file. This function returns a copy of a key comparison object. This is by default a less than object which works same like a less than operator <. The object checks the order of the element keys in the map container. This function takes the two arguments and checks its keys and returns true if the first element is smaller and should go before the second element, else will return false.

**Example**:
```cpp
    map<char, int> newmap;
map<char, int> :: key_compare cmp = newmap.key_comp();
newmap[‘a’] = 1;
newmap[‘b’] = 2;
newmap[‘c’] = 3;
```
**[Run Code](https://rextester.com/ZHZ99476)**
