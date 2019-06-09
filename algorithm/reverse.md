# reverse

**Description :**  It reverses the order of the elements in the range [first, last) of any container. 

**Example** :
```cpp
 int main() { 
          int i; 
          vector<int> v1{1,2,3,4};
          
          reverse(v1.begin(),v1.end());

          vector<int>::iterator i1; 
          for (i1 = v1.begin(); i1 != v1.end(); ++i1) { 
              cout << *i1 << " "; 
          } 
          return 0; 
      } 
```
**[Run Code](https://rextester.com/NXC57566)**
