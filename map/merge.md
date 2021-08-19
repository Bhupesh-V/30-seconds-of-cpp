# accumulate

**Description :** This function is used to merge two maps by transferring the nodes from source map to destination map or we can say it extracts each element from source to
destination map except for the elements with same key value.

**Example** :

```cpp
#include <map>
#include <iostream>
#include <string>
 
int main(){
  std::map<int, std::string> ma {{1, "apple"}, {5, "pear"}, {10, "banana"}};
  std::map<int, std::string> mb {{2, "zorro"}, {4, "batman"}, {5, "X"}, {8, "alpaca"}};
  std::map<int, std::string> u;
  u.merge(ma);
  //here all the elements from source(ma) got merged to destintion(u) and hence ma becomes empty 
  std::cout << "ma.size(): " << ma.size() << '\n';
  u.merge(mb);
  //here all the elements will get merged to destination except for element with key 5, because this key with value "pear" is already there
  std::cout << "mb.size(): " << mb.size() << '\n';
  std::cout << "mb.at(5): " << mb.at(10) << '\n';
  for(auto const &kv: u){
    std::cout << kv.first << ", " << kv.second << '\n';}
}
```
**[Run Code](https://ideone.com/Gf2d0G)**
