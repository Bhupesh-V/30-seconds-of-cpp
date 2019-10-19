std::partial_sort

Description:-

which is used for sorting not the entire range, but only a sub-part of it.

It rearranges the elements in the range [first, last), in such a way that the elements before middle are sorted in ascending order, whereas the elements after middle are left without any specific order.

Example:-
int main() 
{ 
    std::vector<int> v = { 1, 3, 1, 10, 3, 3, 7, 7, 8 }, i; 
  
    std::vector<int>::iterator ip; 
  
    // Using std::partial_sort 
    std::partial_sort(v.begin(), v.begin() + 3, v.end()); 
  
    // Displaying the vector after applying 
    // std::partial_sort 
    for (ip = v.begin(); ip != v.end(); ++ip) { 
        cout << *ip << " "; 
    } 
  
    return 0; 
} 
Output:

1 1 3 10 3 3 7 7 8 
