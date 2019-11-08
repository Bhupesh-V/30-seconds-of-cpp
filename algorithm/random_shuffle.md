# random_shuffle

**Description** : It randomly rearrange elements in range [first, last).
The function swaps the value of each element with some other randomly picked element. When provided, the function gen determines which element is picked in every case. Otherwise, the function uses some unspecified source of randomness.

**Example**:
```cpp

      srand(unsigned(time(0)));
      vector<int> arr;

      // set some values:
      for (int j = 1; j < 10; ++j)

      arr.push_back(j);

      // using built-in random generator
      random_shuffle(arr.begin(), arr.end());

      // using randomfunc
      random_shuffle(arr.begin(), arr.end(), randomfunc);

      // print out content:
      cout << "arr contains:";
      for (auto i = arr.begin(); i != arr.end(); ++i)
      cout << ' ' << *i;

      cout << endl;

      return 0;
```
**[See Sample code](../snippets/algorithm/random_shuffle.cpp)**
**[Run Code](https://rextester.com/MMPQ67900)**
