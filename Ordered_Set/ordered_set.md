# ordered_set

**Description :** Ordered set is a policy based data structure in g++ that keeps the unique elements in sorted order. It performs all the operations as performed by the set data structure in STL in log(n) complexity and performs two additional operations also in log(n) complexity .

1)  order_of_key (k) : Number of items strictly smaller than k .
2)  find_by_order(k) : K-th element in a set (counting from zero).

Required code to implement ordered set 
 ```cpp
    // Common file
    include <ext/pb_ds/assoc_container.hpp>
    // Including tree_order_statistics_node_update
    include <ext/pb_ds/tree_policy.hpp>
    using namespace __gnu_pbds;
    tree < int ,  null_type ,  less ,  rb_tree_tag ,  tree_order_statistics_node_update >
```

**Example** :
```cpp
    #include<bits/stdc++.h>
    #include <ext/pb_ds/assoc_container.hpp>
    #include <ext/pb_ds/tree_policy.hpp>
    using namespace std;
    using namespace __gnu_pbds;
    typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
    int main()
    {
        pbds s;
        for (int i = 0; i < 99; i++)
        {
            s.insert(i); // inserting elements into the set
        }
        cout << s.order_of_key(50) << endl; // returns number of elements strictly smaller than input number
        cout << *s.find_by_order(60) << endl; // returns element present at input index
    }
```
