std::swap is used for swapping of elements between two containers. One of the other way of doing this same thing is facilitated by std::iter_swap, which as the name suggests is used for swapping the elements with the help of an iterator.

It simply exchanges the values of the elements pointed to by the iterators. If we look at its internal working, we will find that this function itself uses std::swap().

Example:-
int main() 
{ 
    // Declaring first vector 
    std::vector<int> v1; 
    int i; 
  
    for (i = 0; i < 10; ++i) { 
        v1.push_back(i); 
    } 
    // v1 contains 0 1 2 3 4 5 6 7 8 9 
  
    std::vector<int>::iterator i1, i2; 
  
    i1 = v1.begin(); 
    i2 = v1.end() - 1; 
  
    // Performing swap between first and last element 
    // of vector 
    std::iter_swap(i1, i2); 
  
    // Displaying v1 after swapping 
    for (i = 0; i < 10; ++i) { 
        std::cout << v1[i] << " "; 
    } 
  
    return 0; 
} 
Output:

9 1 2 3 4 5 6 7 8 0
