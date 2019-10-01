# emplace

**Description :**
    This method is used to insert new elements in set. It returns a pair containing an iterator to the
    inserted key and the second is a boolean value which gives the information of the operation.
    true if insertion happened, false is not.

**Example :**
```cpp
//Run Code To Demonstrate use of set.emplace()
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> mySet {1,2,3,4,-5};

    std::pair<std::set<int>::iterator,bool> pr;
    int key = 6;
    bool inserted= false;
    pr = mySet.emplace(key);                                                    //inserting key in set mySet
    std::set<int>::iterator itr = pr.first;
    inserted = pr.second;
    if(inserted){                                                              //checking if inserted in mySet
        std::cout<<" New element: "<<key<<" inserted in set"<<'\n';            //print key inserted in the set.
    }
    else{
        std::cout<<" Element: "<<key<<" already present in the set"<<'\n';     //print key already present.
    }

    return 0;
}

```

**[Run Code](https://ideone.com/AynYZk)**