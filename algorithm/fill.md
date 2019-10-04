# fill

**Description :** This function assigns the value ‘val’ to all the elements in the range [begin, end), where ‘begin’ is the initial position and ‘end’ is the last position.

**Example** :

```cpp
int main () {
  std::vector<int> myvector (8);                       // myvector: 0 0 0 0 0 0 0 0

  std::fill (myvector.begin(),myvector.begin()+4,5);   // myvector: 5 5 5 5 0 0 0 0
  std::fill (myvector.begin()+3,myvector.end()-2,8);   // myvector: 5 5 5 8 8 8 0 0

  for(int i = 0; i<10; i++)
    	cout<<myvector[i]<<" ";
  std::cout << '\n';

  return 0;
}
```
**[Run Code](https://rextester.com/NFQAFH70188)**