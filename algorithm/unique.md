# unique

**Description :** Unique is used to remove the redundant data, if they are in continuoous address of any data structure. It does not delete the data, it just replace it with other element. It does not effect the size of data structure.

**Example** :
```cpp
    	#include <iostream>
	#include <algorithm>
	using namespace std;
	int main(){
		std::vector<int> v = {1,1,3,3,5,5,5,1,2,2,8,9,9,9,0,8};
		
    		std::vector<int>::iterator itr;
    		itr = std::unique(v.begin(),v.end());
		
    		v.resize(std::distance(v.begin(),itr));
		
    		for(itr = v.begin();itr!=v.end();++itr){
        	cout<<" "<<*itr;
    	}

```
**[Run Code](https://rextester.com/GNHPSK20621)**
