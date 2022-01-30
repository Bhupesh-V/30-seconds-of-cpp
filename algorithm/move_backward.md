# move_backward
**Description** : Is an STL algorithm which completes the moving of elements in the backward order. This algorithm accepts three arguments and then moves the elements belonging to the range [first,last).  The moving of elements begins in the reverse order with termination point at 'result'.

**Example** :


```cpp
#include <iostream>
#include <vector>
int main() {
int sum = 0;
std::string arr[10] = {"my","name","is","abby", "and", "I", "like", "dogs"};
std::cout<< "Before move_back algorithm: " << std::endl;
for (int i = 0; i < 10; ++i)
{
std::cout << arr[i] << " " ;
}

    std::cout << '\n'<< '\n' << "After move_back algorithm: " << std::endl;
    std::move_backward (arr,arr+8,arr+9);
    arr[0]="hello";
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " " ;
    }
    std::cout << '\n'<< std::endl;
    return 0;
}
```
