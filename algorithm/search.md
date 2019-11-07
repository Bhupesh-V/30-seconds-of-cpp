# search

**Description** : Searches the range `[first1,last1)` for the first occurrence of the sequence defined by [first2,last2), and returns an iterator to its first element, or last1 if no occurrences are found.

**Example**: 
```cpp

  std::vector<int> haystack {10, 20, 30, 40, 50, 60, 70, 80, 90};
  int needle1[] = {40,50,60,70};
  std::vector<int>::iterator it;
  it = std::search (haystack.begin(), haystack.end(), needle1, needle1+4);
  if (it!=haystack.end()){
    std::cout << "needle1 found at position " << (it-haystack.begin()) << '\n';
  }
  else{
    std::cout << "needle1 not found\n";
  }

```
**[See Sample code](../snippets/algorithm/search.md)**
**[Run Code](https://rextester.com/)**
