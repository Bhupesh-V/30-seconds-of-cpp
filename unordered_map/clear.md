# clear

**Description :** This function is used to clear the contents of the unordered_map. Destructors are called, and they are elements removed from the container, leaving map with a size of 0.

**Example** :

```cpp

#include<bits/stdc++.h>
using namespace std;

int main ()
{
  // Creating an unordered_map  
  unordered_map<string,string> mymap =
         { {"house","maison"}, {"car","voiture"}, {"grapefruit","pamplemousse"} };

  cout << "mymap contains:";
  for (auto& x: mymap) cout << " " << x.first << "=" << x.second;
  cout << endl;

  mymap.clear(); // Clearing the map and then adding new key-values.
  mymap["hello"]="bonjour";
  mymap["sun"]="soleil";

  cout << "mymap contains:";
  for (auto& x: mymap) cout << " " << x.first << "=" << x.second;
  cout << endl;

  return 0;
}
```
[**Run Code**](cpp.sh/6s7z7l)
