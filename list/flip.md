
#flip


**Description** :
***flip***  is an inbuilt method of C++ STL( Standard Template Library). It flips the bits of the calling bitset. This method flips all 0’s to 1’s and all 1’s to 0’s, which means it reverse each and every bit of the calling bitset when no parameter is passed.
If a parameter is passed the flip method will flip only the nth bit for the integer n passed.


  ```cpp
#include <iostream>
#include <bitset>
using namespace std;
int main() {
    bitset<6> bit1(string("100110"));
    bitset<10> bit2(string("0100001111"));
    // after applying flip() function with nothing passed as parameter it returns
    cout << bit1.flip() << endl;
    // after applying flip() function with 7 passed as parameter it returns
    cout << bit2.flip(7);
    return 0;
}
```
[See the Detail Code ](../snippets/list/flip.cpp)