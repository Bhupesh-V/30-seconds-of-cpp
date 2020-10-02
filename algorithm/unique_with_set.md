# unique_with_set

**Description:**
unique_with_set makes use of fundamentals of set data structure to remove the redundant data, be they are in any order, in a faster way as compared to the use of std::unique.


**Example:**

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
         std::vector<int> v{1,4,4,4,5,6,1,1,5,6};
         
         std::set<int> s(v.begin(),v.end());
         
         for(auto i=s.begin(); i!=s.end(); ++i){
             std::cout<<*i<<" ";
         }
         return 0;
}
```

**[Run Code](https://rextester.com/KWY95130)**
