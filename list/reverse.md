#reverse

**Description**  The list::reverse() is an STL function used to reverse the certain list.


**Example**:
```cpp

  // initializing a list 
  std::list<int> mylist{1, 2, 3, 4};
  
  //calling the reverse function
  mylist.reverse();
   // printing values of the reversed list
   for (auto value : mylist){
    std::cout << ' ' << value;
}

```
