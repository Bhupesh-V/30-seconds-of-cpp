
# transform_reduce

**Description :**  Applies a functor, then reduces. The default functor is multiplication. Available in C++17 and above.


**Example** :

```cpp   
int main()
{
  std::vector<int> arr{1, 2, 3, 4, 5};
  int result;
 
 // the functor here squares each element
 // addition is used to reduce
  result = std17::transform_reduce(arr.begin(),
                                   arr.end()  ,
                                   0                    ,
                                  [](auto a, auto b) {return a + b;},
                                  [](auto a        ) {return a * a;});
  // finds sum of squares of arr
  std::cout << result << std::endl;
  return 0;
}
```
**[Run Code](https://rextester.com/YPMMS86271)**
