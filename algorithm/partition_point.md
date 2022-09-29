# partition_point

**Description :**  This function takes in a partitioned vector (all true elements come before all false elements for a given condition). It then returns an iterator pointing to the first element where that condition is false.<br><br>The following code sample sorts a vector of numbers into even elements followed by odd elements and then determines the partition point. 

**Example** :

```cpp  
#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
    vector<int> exampleVector{2,4,3,4,5,6,9};
    
    auto is_even = [](int i)
    {
        return i % 2 == 0;
    };
     
    // ensure that entered vector is partitioned first
    cout << "Partitioned vector: ";
    for (int &element:exampleVector)
    {
        cout << element << " ";
    }
    cout << endl << endl;
    
    // declare partition value and location
    const auto partitionElement = partition_point(exampleVector.cbegin(), exampleVector.cend(), is_even);
    const int partitionIndex = distance(exampleVector.cbegin(), partitionElement);
    
    // display results
    if (partitionIndex == exampleVector.size())
    {
        cout << "All elements are true, so the partition point is the last true value. It is: " << *partitionElement;
    }
    else
    {
        cout << "Partition point is " << *partitionElement << " and it is the first false value.";
    }
    cout << endl;
    
    cout << "The position of the partition point is " << partitionIndex << "." << endl;
    
    return 0;
}
```
**[Run Code](https://rextester.com/DLHH79928)**
