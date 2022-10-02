# emplace_hint

**Description :** 
  * Inserts the key and its element in the unordered_map with a given hint. The hint provided does not affect the position to be entered. It inserts in the same order         which is followed by the container. 
  * Only inserts unique key and avoids creating object for exisitng key.

**Example** :

```cpp
#include <iostream>
#include<string>
#include<unordered_map>

using namespace std;


int main() {
  
    // initialize unordered_map container
    unordered_map<int, string> mp;
  
    // inserting elements in random order
    mp.emplace_hint(mp.begin(),3,"three");
    mp.emplace_hint(mp.begin(),1,"one");
    mp.emplace_hint(mp.begin(),2,"two");

        
    // printing the map elements 
    cout<<"The unordered_map elements are:"<<endl;
    cout<<"key\telement"<<endl;
    
    for(auto itr = mp.begin(); itr!=mp.end(); itr++){
        cout<<itr->first<<"\t";
        cout<<itr->second<<endl;    
    }
    
    return 1;
}
```
**[Run Code](https://rextester.com/QJT17849)**
