# extract
**Description: ** This function is used to remove a node (a key and its associated value) from an `unordered_map`. Pointers and references to the extracted node should still work properly, and order within the `unordered_map` is unchanged. Note that pointers and references can only be used when the node is re-inserted into an `unordered_map` or `map`.

**Example** :
```cpp
//Demonstrates extract()
#include <iostream>
#include <unordered_map>

int main(){
    std::unordered_map<int, char> mymap;

    //inserting in to unordered_map with O(1) time on average
    mymap.insert({1, 'A'});
    mymap.insert({2, 'b'});
    mymap.insert({3, 'c'});

    //print elements of  unordered_map before extract
    std::cout << "Before extraction \n";
    for (auto it = mymap.begin(); it != mymap.end(); ++it){
        std::cout << it->first << " = "<< it->second << '\n';
    }

    //extract node from map using key
    auto nodeHandle = mymap.extract(1);

    //Print elements of unordered_map after extract
    std::cout << "After extraction \n";
    for (auto it = mymap.begin(); it != mymap.end(); ++it){
        std::cout << it->first << " = "<< it->second << '\n';
    }

    //Modify key of node, then insert
    nodeHandle.key() = 4;
    mymap.insert(move(nodeHandle));

    //Print after changing key
    std::cout << "After key-change \n";
    for (auto it = mymap.begin(); it != mymap.end(); ++it){
        std::cout << it->first << " = "<< it->second << '\n';
    }
}
```
