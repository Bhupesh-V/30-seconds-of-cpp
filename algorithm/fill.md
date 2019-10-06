# fill

**Description :**  Assigns value to all the elements of a container in the range [first, last).
  
**Example** :

```cpp
    
    std::vector<int> vector_1 (6);					//vector_1: 0 0 0 0 0 0
    std::fill (vector_1.begin(), vector_1.begin()+4, 2);		//vector_1: 2 2 2 2 0 0
    std::fill (vector_1.begin()+3, vector_1.end(), 5);			//vector_1: 2 2 2 5 5 5

    std::cout << "vector_1 contains: \n";
    for(std::vector<int>::iterator it=vector_1.begin(); it!=vector_1.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout<< '\n';
```

**[Run Code](https://rextester.com/QATKK94303)**


