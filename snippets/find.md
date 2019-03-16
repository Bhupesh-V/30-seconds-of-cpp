# find

**Description** : Returns the first element in the range [first, last) that satisfies specific criteria(searches for an element equal to *value*).

**Example** : 
```cpp
    #include<vector>
    #include<algorithm> 
    #include<iostream>
    
    int main(){
        vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
        int searchme = 4;
        
        if(find(std::begin(v), std::end(v), searchme) != end(v)){
            std::cout <<"\n v conatins 3";
        }
        else
            std::cout<<"No match !!";

        return 0;
    }
```