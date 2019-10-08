    # fill

**Description :**A vector, once declared, has all its values initialized to zero. Following is an example code to demonstrate the same.
```

**Example** :
```cpp
#include <iostream>     // std::cout
#include <algorithm>    // std::fill
#include <vector>       // std::vector

int main (){
std::vector<int> myvector (8);                       // myvector: 0 0 0 0 0 0 0 0

std::fill (myvector.begin(),myvector.begin()+4,5);   // myvector: 5 5 5 5 0 0 0 0
std::fill (myvector.begin()+3,myvector.end()-2,8);   // myvector: 5 5 5 8 8 8 0 0

std::cout << "myvector contains:";
for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it){
std::cout << ' ' << *it;
}

std::cout << '\n';
return 0;
}
```
**[Run Code](https://rextester.com/FEMYF89900)**
