**Description :** This function is used to find the reference to the mapped value of the element with a key value equivalent

**Example** :

```cpp
// Demonstrates at()
#include <iostream>
#include <string>
#include <unordered_map>

int main(){
    //declares an empty map. O(1)
    std::unordered_map<int, string> my_map; 
    
    // inserting in to unordered_map with O(1) time on average
    my_map.insert(make_pair(1, "first"));
    my_map.insert(make_pair(2, "second"));
    my_map.insert(make_pair(3, "third"));
    my_map.insert(make_pair(4, "fourth"));
    
    //this method gives a run time error if the key is not present 
    cout<<"Value of key my_map[2] = "
        <<my_map.at(2)<<endl;
      
    try 
    {
        my_map.at(2);
    } 
  
    catch(const out_of_range &e)
    {
        cerr << "Exception at " << e.what() << endl;
    }
    return 0;
}

```
**[Run Code](https://ide.geeksforgeeks.org/ak9BFy8xSG)**