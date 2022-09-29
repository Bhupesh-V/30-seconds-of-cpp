# is_partitioned

**Description :** This function takes in a vector and a boolean value. It iterates through the vector and tells whether all the elements where the condition is true precede all the elements where the condition is false.

**Example :**

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool pred(int x) {
return (x % 4 == 0);
}

int main() {
vector<int> partitionTest = {12,20,15,18,21,10,22,45};

bool partIndicator = std::is_partitioned(partitionTest.begin(), partitionTest.end(), pred);

if (partIndicator) {
cout << "The vector is partitioned";
}
else {
cout << "The vector is not partitioned";
}
return 0;
}

```

**[Run Code](https://rextester.com/NRT73285)**
