/*
    Author : Avneesh Kumar
    Date   : 14/01/2020
    Time   : 23:37
    Description :  This function is used to find maximum number of elements a list container can hold.
*/

#include <iostream>
#include <list>

using namespace std; 

int main(){

    // Creating a list 
    std::list<int> demoList; 
  
    // checking the max size of the list 
    std::cout << demoList.max_size(); 
  
    return 0; 
} 
