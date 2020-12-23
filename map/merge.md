# merge

**Description :** This function extracts elements from a source container and inserts it into the \*this container. If an element from the source has a key that matches an element in \*this container

**Example :**

```cpp

#include <iostream>
#include <map>

int main(){
    std::map<int, std::string> mymap1 = {{1,"dog"}, {2,"cat"}, {3,"bird"}};
    std::map<int, std::string> mymap2 = {{3,"hamster"}, {4,"snake"}, {5,"gecko"}};

    //Note: mymap1 and mymap2 share an element with key '3'

    std::map<int, std::string> mymap3;
    mymap3.merge(mymap1);

    std::cout<<"mymap3 after merging mymap1\n";
    for (auto x: mymap3){
      std::cout << x.first << " = " << x.second<<"\n"; //Outputs every element now in mymap3
    }

    mymap3.merge(mymap2);
    std::cout<<"\nmymap3 after merging mymap2\n"; //Outputs every element now in mymap3

    for (auto x: mymap3){
      std::cout << x.first << " = " << x.second<<"\n";
    }
    return 0;
}

```

**[Run Code](https://rextester.com/WSVBL93737)**
