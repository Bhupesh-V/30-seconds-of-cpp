### sort

#### Description

This function is implemented as Quick-sort. The complexity of it is O(N*log(N)).

#### Example


```cpp
    #include<iostream>
    #include<algorithm>

    void show(int a[]) {
        for(int i = 0; i < 10; ++i)
            std::cout << a[i] << " ";
    }

    int main() {

        int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
        std::cout << "\n The array before sorting is : ";
        show(a);

        std::sort(a, a+10);

        std::cout << "\n\n The array after Sorting is : ";
        show(a);

        return 0;
    }
```
