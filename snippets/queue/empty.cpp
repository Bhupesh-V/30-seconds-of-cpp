// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
 Author : Timothy Itodo
 Date : 30/05/2019
 Time : 01:00 PM
 Description : empty() function is used to check if the queue container is empty or not. This function returns true, if the queue is empty or false, otherwise.
 */
#include <iostream>
#include <queue>

int main(){
    // Empty queue
    std::queue<int> myqueue;
    
    if(myqueue.empty()){
        std::cout << "My queue is empty";
    }
    else{
        std::cout << "My queue is not empty";
    }
}
