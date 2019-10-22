# clamp

**Description :** Clamp is a method of restricting a number to fall within a specific range of two numbers, if Value is greater than minValue and less that maxValue it will return a reference to that number.

If the Value is less that minValue it will return minValue, likewise if Value is greater than maxValue it will return maxValue.

**Example** :

std::cout and std::endl derive from the iostream library

std::max and std::min derive from the algoithm library

```cpp
#include <iostream>
#include <algorithm> 

template<class T>
const T& clamp(const T& value, const T& maxValue, const T& minValue) {
	return std::max(maxValue, std::min(value, minValue));
}

int main(void)
{
	for (int i = 0; i < 20; i++)
	{
		std::cout << clamp(i, 0, 10) << std::endl;
	}

	system("pause");
	return 0;
}
```
**[Run Code](https://ideone.com/mYXmTt)**