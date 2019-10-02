# equal

**Description** : Helps to compares the elements in a vector.

**Example**:

```cpp
    int sequence[] = {20,40,60,80,100}; 
    std::vector<int> avector(sequence,sequence+5);     //avector: 20, 40, 60, 80, 100

    //using the function equal
    if (std::equal(avector.begin(), avector.end(), sequence)) {
        std::cout << "The contents of both sequences are equal.\n";
    } else {
        std::cout << "The contents of both sequences differ.\n";
    }

    avector[3] = 81;                                 //avector: 20, 40, 60, 81, 100

    if (std::equal(avector.begin(), avector.end(), sequence)) {
        std::cout << "The contents of both sequences are equal.\n";
    } else {
        std::cout << "The contents of both sequences differ.\n";
    }
``` 