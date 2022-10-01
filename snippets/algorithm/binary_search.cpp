/*
    Author : Mukund Ladani
    Date : Date format 10/01/2022
    Time : Time format 14:01
    Description :  Performed Binary Search. Along with proto-type of array.
*/

#include <bits/stdc++.h>

template <class ForwardIt, class T>
bool binary_search(ForwardIt first, ForwardIt last, const T &value)
{
    first = std::lower_bound(first, last, value);
    return (!(first == last) && !(value < *first));
}

void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
    {
        std::cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int asize = sizeof(a) / sizeof(a[0]);
    std::cout << "\n The array is : ";
    show(a, asize);
    std::cout << "\n\nLet's say we want to search for 2 in the array";
    std::cout << "\n So, we first sort the array";
    std::sort(a, a + asize);
    std::cout << "\n\n The array after sorting is : ";
    show(a, asize);
    std::cout << "\n\nNow, we do the binary search";
    if (std::binary_search(a, a + 10, 2))
        std::cout << "\nElement found in the array";
    else
        std::cout << "\nElement not found in the array";

    std::cout << "\n\nNow, say we want to search for 10";
    if (std::binary_search(a, a + 10, 10))
        std::cout << "\nElement found in the array";
    else
        std::cout << "\nElement not found in the array";

    return 0;
}