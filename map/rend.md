# rend
**Description** This function returns a reverse iterator pointing ot the element right before the first key value pair in the map 

**Example** : 
```cpp
#include <iostream>
#include<map>
using namespace std;

int main(){
        map<char,int> mymap;
        mymap.insert(make_pair('a',1));
        mymap.insert(make_pair('b',3));
        mymap.insert(make_pair('c',5));
            
        
        for(auto i = mymap.rbegin(); i != mymap.rend();i++){
                cout<< i -> first << " = " << i -> second << endl;
        }


return 0;
}

[Run Code](https://rextester.com/DHB11056)
