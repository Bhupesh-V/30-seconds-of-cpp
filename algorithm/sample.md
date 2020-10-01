# sample

**Description :** Selects n elements from the sequence [first; last) (without replacement) such that each possible sample has equal probability of appearance, and writes those selected elements into the output iterator out

**Example** :
```cpp
#include <iostream>
#include <random>
#include <string>
#include <iterator>
#include <algorithm>
 
int main()
{
    std::string in = "aeiou", out;
    std::sample(in.begin(), in.end(), std::back_inserter(out),
                2, std::mt19937{std::random_device{}()});
    std::cout << "Two random letters out of " << in << " : " << out << '\n';
}

```
**[See Sample code](../snippets/algorithm/sample.cpp)**
**[Run Code](https://rextester.com/GDB4261)**
