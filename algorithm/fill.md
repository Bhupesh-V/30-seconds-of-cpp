#Fill
**Description** : Used to fill a given range with specified value.
Syntax: fill(begin,last,value);

**Example**:
```cpp
    // Print out contents of vector
    void print(std::vector<int> &v){
      for(int i = 0; i < v.size(); ++i){
          std::cout << v[i] << ' ';
      }
      std::cout << '\n';
    }

    int main(){
      // Random vector
      std::vector<int> myVector{3, -5, 9, 7, 11, 12, 82, 34, 6, 78, 21, 17};

      // Print the vector
      std::cout << "Array: ";
      print(myVector);

      // Fill takes 3 arguments : starting index,last index and the value to be filled respectively 
      std::fill(myVector.begin(), myVector.end()-2,0);

      // Print the new vector
      std::cout << "New array: ";
      print(myVector);

      return 0;
    }
```
**[Run Code](https://rextester.com/TLRUZ14140)**
