# rbegin

**Description** : The function returns a reverse iterator pointing to the last element in the container.

**Syntax :** vectorname.rbgin()

**Example**:
```cpp
/// Demonstrates rbegin() 
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec; //declares an empty vector
    
    //inserting elements in vector
    vec.push_back(101);
    vec.push_back(12);
    vec.push_back(999);
    vec.push_back(143);
  
    //Displaying elements of  vector from the end
    cout << "Content of the vector \n";
    for (auto it = vec.rbegin(); it != vec.rend(); it++){ 
       cout << *it << "\n";
    }
    return 0;
}

```
**[Run and test Code](https://rextester.com/ZJPG53873)**

