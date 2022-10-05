/*
    Author : Archit Sharma ;)
    Date : 05/10/2022
    Time : 23:23
    Description : This code snippet is for the binary search method which is used to check if an element exists in a sorted array
*/
#include <bits/stdc++.h>

int main(){
     // Pre-Populated vector

    std::vector<int> myVector = {1,2,3,4,5,6};

    int find=4;

    //Sort the given vector

    sort( myVector.begin(),myVector.end() );

    // Calling binary search method to get the index of element to be found

    if(binary_search( myVector.begin(), myVector.end(), find )){
        std::cout << true ;  //if element is present in vector, print true
    }else{
        std::cout << false;  //if element is not present in vector, print false
    }
}