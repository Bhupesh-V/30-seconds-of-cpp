# is_sorted

**Description :** The C++ function std::is_sorted checks if the elements in range [first, last] are sorted in ascending order. If the elements are sorted in ascending order, the function returns true, else returns false.

**Example :**

```cpp
int main(){

    std::vector<int> v = {1, 5, 12, 17, 21, 35};
    
    if(is_sorted(v.begin(), v.end())){
        std::cout << "Vector is sorted\n";
    }
    else{
        std::cout << "Vector is not sorted\n";
    }
    
    return 0;
}
```

**[Run Code](https://rextester.com/EDDQ23470)**
