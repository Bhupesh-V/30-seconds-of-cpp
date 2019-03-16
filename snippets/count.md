# count

**Description :** : Returns the number of elements in the range `[first, last)` satisfying specific criteria(counts the elements that are equal to *value*).

**Example** : 
```cpp
    #include<vector>
    #include<algorithm> 
    #include<iostream>
    
    int main(){
        std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
        int target1 = 3;    // determine how many integers in a std::vector match a target value.
        int num_items1 = count(v.begin(), v.end(), target1);
        std::cout << "number: " << target1 << " count: " << num_items1 << '\n';

        return 0;
    }
 ```
 **[See Sample Code](https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/algorithm/count.cpp)**