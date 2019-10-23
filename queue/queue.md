# queue

**Description :** The Queue is a abstract data type that is a lnlo (last in last out) meaning that the first element that you [push](https://github.com/Ranner198/30-seconds-of-cpp/blob/master/queue/push.md) will be the first element to [pop](https://github.com/Ranner198/30-seconds-of-cpp/blob/master/queue/pop.md). Below are examples of Constructor's to inialize a queue
**Example** :

```cpp
#include <iostream>
#include <queue>

int main(void)
{
    // Create a empty queue
    std::queue<int> emptyConstructor;
    
    // Push a value to it so it is no longer empty
    emptyConstructor.push(3);
    
    // Copy the above queue
    std::queue<int> copiedConstructor(emptyConstructor);
    
    std::cout << emptyConstructor.front() << std::endl;
    
    std::cout << copiedConstructor.front() << std::endl;
        
	return 0;
}
```
**[Run Code](https://rextester.com/TGP83427)**