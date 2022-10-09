/*
    Author: Priyanka
    Date: 10/09/2022
    Time: 19:43
    Description: Erase an element in an array using erase().
*/


#include <iostream>
#include<vector>
#include<algorithm>

int main(){
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::vector<int> vect(arr, arr+n);
 
    std::cout << "Distance between first to max element: ";
    //max_element()-> returns largest element of the vector
    // distance()-> returns distance of first to maximum element
    std::cout << distance(vect.begin(), max_element(vect.begin(), vect.end()));
    return 0;
}