# next_permutaton

**Description :** This function takes array elements and returns the true if it able to rearrange the object as a lexicographically greater permutation , otherwise it return false

**Example** :

```cpp
int a[]={1,2,5,9};
    int n=sizeof(a)/sizeof(int);
    
    do{
        for(int i=0;i<n;i++){
            std::cout<<a[i]<<" ";
        }
        std::cout<<'\n';

//find  next lexicographically order from current order , if possible
    }while(std::next_permutation(a,a+n));

```
**[Run Code](https://rextester.com/edit/GTYYHV40877)**
