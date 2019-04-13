### adjacent_find

#### Description

Binary function which returns first adjacent element pairs based on certain condition (as third argument).  Default condition checks equality.

#### Example

```cpp
    #include<vector>
    #include<algorithm>
    #include<iostream>

    int main(){
        std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
        // Binary function which returns first adjacent element pairs based on certain condition (as third argument) .
        // Default condition checks equality.
        auto i  = std::adjacent_find (v.begin(), v.end());
        std::cout <<"First adjacent element that are equal " << i <<"\n";

        return 0;
    }
```
