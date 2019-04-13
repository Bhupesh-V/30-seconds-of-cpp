### count_if

#### Description

Returns the number of elements in the range `[first, last)` satisfying specific criteria(counts the elements that are equal to *value*).

#### Example

```cpp
    #include<vector>
    #include<algorithm>
    #include<iostream>

    int main(){
        vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
        // use a lambda expression to count elements divisible by 3.
        int num_items3 = count_if(v.begin(), v.end(), [](int i){return i % 3 == 0;});
        std::cout << "Number of items divisible by 3 : " << num_items3 << '\n';

        return 0;
    }
```
