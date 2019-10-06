# push_front

**Description :** push_front() function is used to push elements into a list from the front. The new value is inserted into the list at the beginning, before the current first element and the container size is increased by 1.

**Example** :

```cpp
    // Demonstrates push_front() 
    #include <iostream>
    #include <list>

    int main(){
        //declares an empty list
        std::list<int>mylist; 
        
        //appending\inserting elements at the front by push_front
        mylist.push_front(1);
        mylist.push_front(4);
        mylist.push_front(3);
      
        //print elements of  list
        std::cout << "List elements are  \n";
        for (auto it = mylist.begin(); it != mylist.end(); ++it){ 
            std::cout << *it << '\n'; 
        }

        return 0;
    }

```
**[Run Code](https://rextester.com/SEC41125)**
