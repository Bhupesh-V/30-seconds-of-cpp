# max_size

**Description** : This function is used to return the maximum number of elements a set container can hold.

**Syntax :** setname.max_size()

**Example**:
```cpp
// Demonstrates max_size() function
#include <bits/stdc++.h>
using namespace std;

int main(){
    //Declares a set
    set<int> s1; 
    
    //Inserting elements in set
    s1.insert(1);
	s1.insert(2);
    //set becomes 1,2
  
    cout<<s1.max_size();
}

```
**[Run Code](https://rextester.com/BWKZ13835)**

