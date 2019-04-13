### find_if_not

#### Description

Returns the first element in the range [first, last) that satisfies specific criteria(searches for an element for which predicate q returns *false*).

#### Example

```cpp
    #include<vector>
    #include<algorithm>
    #include<iostream>

    bool IsOdd (int i) {
        return ((i%2)==1);
    }

    int main(){
        std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
        if(find_if_not(std::begin(v), std::end(v),IsOdd) != end(v)){
            std::cout <<"\n First Even Value";
        }
        else
            std::cout<<"No match !!";
        return 0;
    }
```
