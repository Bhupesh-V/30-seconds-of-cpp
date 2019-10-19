std::unique

Description:-

std::unique is used to remove duplicates of any element present consecutively in a range[first, last). It performs this task for all the sub-groups present in the range having the same element present consecutively.

Example:-
int main() 
{ 
    std::vector<int> v = { 1, 1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8 }, i; 
  
    std::vector<int>::iterator ip; 
  
    // Using std::unique 
    ip = std::unique(v.begin(), v.begin() + 12); 
    // Now v becomes {1 3 10 1 3 7 8 * * * * *} 
    // * means undefined 
  
    // Resizing the vector so as to remove the undefined terms 
    v.resize(std::distance(v.begin(), ip)); 
  
    // Displaying the vector after applying std::unique 
    for (ip = v.begin(); ip != v.end(); ++ip) { 
        cout << *ip; 
    } 
  
    return 0; 
} 
