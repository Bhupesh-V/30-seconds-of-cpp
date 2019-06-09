// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
 Author : Timothy Itodo
 Date : 30/05/2019
 Time : 01:00 PM
 Description : emplace() function is used to add a new element at the end of the queue, after its current last element. The element is added to the queue container and the size of the queue is increased by 1.
 */
#include <iostream>
#include <queue>

int main(){
    // Empty queue
    std::queue<int> myqueue;
    
    // adding elements into queue using emplace()
    myqueue.emplace(0);
    myqueue.emplace(1);
    myqueue.emplace(2);
    
    // print contents of queue
    while (!myqueue.empty()){
        std::cout << ' ' << myqueue.front();
        myqueue.pop();
    }
}
