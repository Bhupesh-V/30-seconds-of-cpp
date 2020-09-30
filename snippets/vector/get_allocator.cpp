#include <iostream>
#include <vector>
#define SIZE 8

int main() {
    std::vector<char> arr;

    // Allocate space for SIZE elements
    char *ptr = arr.get_allocator().allocate(SIZE);

    // Construct values in-place on the vector
    // The values are the characters 'a', 'b', ...
    for (int i = 0; i < SIZE; i++) {
        arr.get_allocator().construct(ptr + i, i + (int)'a');
    }

    // Display the vector
    for (int i = 0; i < SIZE; i++) {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate and free the memory
    for (int i = 0; i < SIZE; i++) {
        arr.get_allocator().destroy(ptr + i);
    }
    arr.get_allocator().deallocate(ptr, SIZE);

    return 0;
}