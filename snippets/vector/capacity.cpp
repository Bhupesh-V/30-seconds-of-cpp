// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Rizky Agung Dwi Putranto
    Date : 01/10/2019
    Time : 11:05
    Description : std::vector::capacity from STL returns the size of the storage space currently allocated for the vector, expressed in terms of elements.
*/

#include <iostream>
#include <vector>

int main (){	
    // Initialize vector
    std::vector<int> vector1;

    // Assign some vaues in the vector:
    for (int i=0; i<100; i++) 
        vector1.push_back(i);

    // See the amount of current element (size) and the capacity currently used (capacity)
    std::cout << "Size: " << (int) vector1.size() << '\n';
    std::cout << "Capacity: " << (int) vector1.capacity() << '\n';
    
    return 0;
}