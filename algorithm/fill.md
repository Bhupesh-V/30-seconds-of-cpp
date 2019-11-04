# fill

**Defination:-** A vector, once declared, has all its values initialized to zero.eg-> std::vector<int>a(5) //a =  0 0 0 0 0.
What if we wish to initialize the vector to a specific value, say 1 ? For this, we can pass the value along with the size of the vector.
eg-> std::vector<int> a(5,1) // a = 1 1 1 1 1.
What if we wish to initialize the first 2 values to say 10 and rest 3 values as 20?
  
**Fill():-** The ‘fill’ function assigns the value ‘val’ to all the elements in the range [begin, end), where ‘begin’ is the initial position and ‘end’ is the last position(not inclusive)

eg->  
  std::vector<int> v(5); 
  fill(v.begin() + 2, v.end() - 1, 4);
  output => v = 0 0 4 4 0 
**Syntax:- fill(first,last,value)**

**Example code:-**

```cpp

    int main (){ 
      
      std::vector<int> v(8);

      std::fill(v.begin() + 2, v.end() - 1, 4); 

      for(int i=0; i<v.size(); ++i){ 

          cout << v[i] << " "; 

      }
  
    return 0; 

    }
 
```
