std::partial_sort

Description:-

std::partial_sort is used for sorting the range within the entire container. So, if we want to keep the original container intact and just copy the sorted sub-part of the container into another one, then for that purpose, we can use std::partial_sort_copy.

Example:-
int main() 
{ 
    std::vector<int> v = { 1, 1, 3, 10, 3, 3, 7, 7, 8 }, v1(3); 
  
    std::vector<int>::iterator ip; 
  
    // Using std::partial_sort_copy 
    std::partial_sort_copy(v.begin(), v.end(), v1.begin(), v1.end()); 
  
    // Displaying the vector after applying 
    // std::partial_sort_copy 
    for (ip = v1.begin(); ip != v1.end(); ++ip) { 
        cout << *ip; 
    } 
  
    return 0; 
} 
