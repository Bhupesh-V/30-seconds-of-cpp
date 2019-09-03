# find_if_not

**Description** : Returns the first element in the range [first, last) that satisfies specific criteria(searches for an element for which predicate q returns *false*).

**Example**:
```cpp
    bool IsOdd (int i) {
        return ((i%2)==1);
    }

    int main(){
        std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
        if(std::find_if_not(std::begin(v), std::end(v), IsOdd) != std::end(v)){
            std::cout <<"\n First Even Value";
        }
        else
            std::cout<<"No match !!";
        return 0;
    }
```
**[Run Code](https://rextester.com/TZCBJG77851)**
