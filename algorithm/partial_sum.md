# partial_sum

**Description :**  This function assigns partial sum of the corresponding elements of an array to every position of the second array.

**Example** :

```cpp 
    int val[] = {1,2,3,4,5};
    int result[5];

    // Calculate the partial sums up to the fifth element
    std::partial_sum (val, val+5, result);
    std::cout <<"The partial_sum of the 5 elements is: ";
    
    //Printout result
    for (int i=0; i<5; i++) std::cout << result[i] << ' ';
    std::cout << '\n';
```
**[See Sample Code](../snippets/algorithm/partial_sum.cpp)**<br />
**[Run Code](https://rextester.com/UGBQO35903)**
