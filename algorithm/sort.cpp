// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Luis Malicay
    Date : 06/06/2019
    Time : 12:28 PM
    Description : Sort the elements in a container in ascending order.
*/
#include <algorithm>
#include <iostream>
#include <vector>

// Print out contents of vector
void print(std::vector<int> &v){
    for(int i = 0; i < v.size(); ++i){
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';
}

int main(){
    // Unordered vector
    std::vector<int> myVector{3, -5, 9, 7, 11, 12, 1, 2, 5, 21, 17};

    // Print undordered vector
    std::cout << "Unsorted: ";
    print(myVector);

    // Sort takes beginning element and ending element as parameters
    std::sort(myVector.begin(), myVector.end());

    // Print sorted vector
    std::cout << "Sorted: ";
    print(myVector);

    return 0;
}