# partial_sum

**Description :**  
Calculates aggregate partial sums of the given range.

A partial sum of a range [input<sub>first</sub>,input<sub>last</sub>) is as follows:

output<sub>0</sub> = input<sub>first</sub><br>
output<sub>1</sub> = input<sub>first</sub> + input<sub>first+1</sub><br>
output<sub>2</sub> = input<sub>first</sub> + input<sub>first+1</sub> + input<sub>first+2</sub><br>
...<br>
output<sub>n</sub> = input<sub>first</sub> + input<sub>first+1</sub> + input<sub>first+2</sub> + ... input<sub>last-1</sub><br>

Where n = last-first+1

Note: The function does not create any output containers. The container to store output must be initialized with sufficient space.
The function takes the following parameters:
1) _InputIterator first:

    This is an iterator pointing to the first element of the range (input_first in the exmplre)
2) _InputIterator last:

    This is an iterator pointing to the last element of the range (input_last)
3) _OutputIterator result:

    This is an iterator pointing to the beginning of the result container
4) _BinaryOperation binary_op: (Optional)

    This is used in place of the default sum

The function returns an OutputIterator res, which is the end of the output range

**Example** :

```cpp
    std::vector<int> ves{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
	std::vector<int> result(4);
	auto res = partial_sum(vec.begin(), vec.begin() + 4, result.begin());
	for(auto it = result.begin();it < res; it++) {
		std::cout<<*it<<std::endl;
	}
```
**[See Sample code](snippets/vector/partial_sum.cpp)**<br>
**[Run Code](https://ideone.com/Abig1G)**
