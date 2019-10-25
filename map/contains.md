# contains

**Description :**  Checks whether there is an element with a specified key in the container. Returns true if there is such an element, otherwise false. 
  
**Example** :

```cpp
    /* Should print:
    2 found.
    1 not found. */
    std::map<int, int> example = {{2, 3}, {4, 5}};

    if (example.contains(2)) {
        std::cout << "2 found." << std::endl;
    } else {
        std::cout << "2 not found." << std::endl;
    }

    if (example.contains(1)) {
        std::cout << "1 found." << std::endl;
    } else {
        std::cout << "1 not found." << std::endl;
    }

```
**[See Sample code](snippets/vector/contains.cpp)**<br>
**[Run Code](https://wandbox.org/permlink/JhoFq4AxExrtctY1)**