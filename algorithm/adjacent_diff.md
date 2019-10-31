int comp(int x, int y) 
{ 
    return x + y; 
} 
  
// Driver code 
int main() 
{ 
    int val[] = { 1, 2, 3, 5, 9, 11, 12 }; 
    int n = sizeof(val) / sizeof(val[0]); 
    int result[7]; 
  
    // Array contains 
    std::cout << "Array contains :"; 
    for (int i = 0; i < n; i++) 
        std::cout << " " << val[i]; 
    std::cout << "\n"; 
  
    // std :: adjacent_difference using custom function 
    std::adjacent_difference(val, val + 7, result, comp); 
  
    std::cout << "Using custom function: "; 
    for (int i = 0; i < n; i++) 
        std::cout << result[i] << ' '; 
    std::cout << '\n'; 
  
    return 0; 
} 