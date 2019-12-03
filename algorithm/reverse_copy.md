# reverse_copy

**Description**: Copies the elements from a given range but in reverse order.

**Example**:  
```cpp
int main(){
    int n = 5;
    std::vector<int> myvector;
    for(int i = 0; i < n; i++){
        myvector.push_back(i);
        std::cout << myvector[i] << " ";
    }                                //myvector contains: 0 1 2 3 4
    std::cout << std::endl;
    
    std::vector<int> temp(n);        //temp contains: 0 0 0 0 0 
    std::reverse_copy(std::begin(myvector), std::end(myvector), std::begin(temp));
    for(int i = 0; i < n; i++){
        std::cout << temp[i] << " "; 
    }                                //temp now contains: 4 3 2 1 0
    std::cout << std::endl;
}
```

**[Run Code](https://rextester.com/PLMFC40552)**
