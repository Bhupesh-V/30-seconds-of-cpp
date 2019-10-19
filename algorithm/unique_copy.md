std::unique_copy()
Descriptiom:-

if we don’t want to alter with the original range and just want the result of std::unique to be copied into another container, for this we have another function defined in , i.e., std::unique_copy(). In this, only the first element from every consecutive group of equivalent elements in the range [first, last) is copied.
Example:-
int main() 
{ 
    std::vector<int> v = { 10, 10, 30, 30, 30, 100, 10, 
                      300, 300, 70, 70, 80 }; 
  
    // Declaring a vector to store the copied value 
    std::vector<int> v1(10); 
  
    std::vector<int>::iterator ip; 
  
    // Using std::unique_copy 
    ip = std::unique_copy(v.begin(), v.begin() + 12, v1.begin()); 
    // Now v1 contains {10 30 100 10 30 70 80 0 0 0} 
  
    // Resizing vector v1 
    v1.resize(std::distance(v1.begin(), ip)); 
  
    std::cout << "Before: "; 
    for (ip = v.begin(); ip != v.end(); ++ip)  
    { 
        std::cout << *ip; 
    } 
  
    // Displaying the vector after applying std::unique_copy 
    std::cout << "\nAfter: "; 
    for (ip = v1.begin(); ip != v1.end(); ++ip)  
    { 
        std::cout << *ip; 
    } 
  
    return 0; 
} 
