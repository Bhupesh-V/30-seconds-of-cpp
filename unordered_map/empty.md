# empty

**Description :** This function is used to tell whether unordered map is empty or not.

**Example** :

```cpp
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,int> m;
    //Suppose we add some entries in the map,example
    m[1] = 1;
    m[2] = 2;
    m[3] = 3;
    m[4] = 4;
    if(!m.empty()){
        cout<<"This map is not Empty"<<endl;
    }else{
        cout<<"This map is Empty"<<endl;
    }
    m.clear();
    
    if(!m.empty()) cout<<"This map is not empty\n";
    else cout<<"This map is empty\n";
    
    return 0;
}
```
**[Run Code](https://ide.geeksforgeeks.org/owcG1W9bU2)**
