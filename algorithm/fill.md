# fill

**Description** : Assigns a value to all the elements in the range,
where ‘begin’ is the initial position and ‘end’ is the last position.

**Example**:
```cpp
    std::vector<int> myvector (10);  // creates the vector: {0,0,0,0,0,0,0,0,0,0}

    std::fill (myvector.begin(),myvector.begin()+3,1);   // myvector: {1,1,1,0,0,0,0,0,0,0}
    std::fill (myvector.begin()+3,myvector.end()-2,2);   // myvector: {1,1,1,2,2,2,2,2,2,2}

    /* Inside the parentheses, the first element indicates where the fill begins.
    The second indicates where it stops, and the third indicates the value to fill.
    */

    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
        std::cout << ' ' << *it;
    }
    std::cout << '\n';

```
**[See Sample code](../snippets/algorithm/fill.cpp)**
**[Run Code](https://rextester.com/URXP50505)**