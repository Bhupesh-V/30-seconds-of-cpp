/*
    Author : Yashwi Shah
    Date   : 10/15/2019
    Time   : 12:40
    Description :  The function returns a pointer to the first element in the array which is used internally by the vector.
*/

#include <iostream>
#include <vector>

int main() 
{ 
    // vector initialisation
    std::vector<int> v = { 1, 2, 3, 4, 5 }; 
  
    // memory pointer pointing to the first element 
    int* pos = v.data(); 
  
    // prints the vector 
    std::cout << "The vector elements are: "; 
    for (int i = 0; i < v.size(); ++i){
        std::cout << *pos++ << " "; 
    }
    return 0; 
} 
