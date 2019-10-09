# swap

**Description :** map::swap() function is used to exchange the contents of two maps but the maps must be of same type, although sizes may differ. This function returns nothing.

**Example** :

```cpp
int main() { 
    // declaration of map containers of same type
    std::map<char, int> mp1, mp2;
    
    mp1['a'] = 1; 
    mp1['b'] = 2; 
    mp1['c'] = 3; 
    
    mp2['A'] = 5;
    mp2['B'] = 10;
    mp2['C'] = 11;
    
    mp1.swap(mp2);
    
    return 0; 
} 
```
**[Run Code](https://rextester.com/HEJFBD70786)**
