/*
    Author : Michael Bilan
    Date : 07/05/2019
    Time : 09:14
    Description : Example code for STL vector::emplace_back
*/

#include <iostream>
#include <vector>

int main(){
    std::vector<int> v{ 1, 2, 3}; // Create a three item array
    
    std::cout << "Vector v contents: ";
    
    // Print all values in v
    for(auto iter : v){
        std::cout << iter << ", ";
    }
    
    std::cout << std::endl;
    
    v.emplace_back(4); // Create and append integer value 4 to vector v
    
    std::cout << "Vector v contents after emplace_back: ";
    // Print all values in v again - should have 4 now!
    for(auto iter : v){
        std::cout << iter << ", ";
    }
    
    return 0;
}
