#rotate_copy


**Description** :
***rotate_copy***  is basically to copy the contents of data structure by bringing the contents from mid till end to front and then append the entries from starting to mid at last.
Check the code snippet and the output.


  ```cpp
int myints[] = {10,20,30,40,50,60,70};

  std::vector<int> myvector (7);

  std::rotate_copy(myints,myints+3,myints+7,myvector.begin());

  // print out content:
  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
```
[See the Detail Code ](../snippets/algorithm/rotate_copy.cpp)




