# make_heap

**Description :**  make_heap() is used to transform a given sequence into a heap.
A heap is a data structure which points to highest( or lowest) element and making its access in O(1) time.

**Example** :
```cpp
 int main() { 
          int i;
          // initializing vector; 
          vector<int> vi = { 4, 6, 7, 9, 11, 4 }; 
          
          // using make_heap() to transform vector into 
          // a max heap 
          
          make_heap(vi.begin(),vi.end()); 
          
          //checking if heap using  
          // front() function 
          cout << "The maximum element of heap is : "; 
          cout << vi.front() << endl; 
          
          //printing the heap
          for(i=0;i<vi.size();++i){
          cout << vi[i] << endl;
          }
          
          return 0; 
      } 
```
**[Run Code](https://rextester.com/ZTZW85691)**
