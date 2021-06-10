// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Kais Saradi
    Date : 09/06/2021
    Time : 09:00 PM
    Description : Sort the elements in a container in ascending order.
*/
#include <algorithm>
#include <iostream>
#include <vector>

int main(){
    // Create a Vector
    int intList[] {5,13,100,27,64,123,15};
    std::vector<int> heapVector (intList, intList + 7);

    //print vector
    std::cout << "Unsorted Vector:\n";
    for(int i=0; i<heapVector.size(); i++){
        std::cout << heapVector[i] << '\n';
    }

    //make heap from vector
    std::make_heap(heapVector.begin(),heapVector.end());

    //sort vector using heap sort
    std::sort_heap(heapVector.begin(), heapVector.end());

    //print sorted vector
    std::cout << "Sorted Vector:\n";
    for(int i=0; i<heapVector.size(); i++){
        std::cout << heapVector[i] << '\n';
    }

    return 0;
}