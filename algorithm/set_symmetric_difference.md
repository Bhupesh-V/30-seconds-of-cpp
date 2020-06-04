# set_symmetric_difference

**Description:** Compares two sets and fills a container with their difference.


**Example:**

```cpp
int main() {

    //intialize arrays - must be sorted
    int firstArray[5] = { 0, 2, 4, 6, 8 };
    int secondArray[5] = { -4, -2 , 0, 2, 4 };

    //destination must be large enough to hold values
    std::vector<int> destination(10);
    std::vector<int>::iterator itr;

    //set iterator to start at new vector of differences
    itr = std::set_symmetric_difference(firstArray, firstArray + 5, secondArray, secondArray + 5, destination.begin());

    //trim non-value elements
    destination.resize(itr - destination.begin());

    //print vector of values
    std::cout << "The difference between the two sets is:";
    for (int i = 0; i < destination.size(); ++i) {
        std::cout << " " << destination[i];
    }

    return 0;
}
```

**[Run Code](https://rextester.com/STA68488)**
