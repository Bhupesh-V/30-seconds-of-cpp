// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Rickey Patel
    Date : 23/05/2019
    Time : 03:50 PM
    Description : pop() function is used to remove an element from the front of the queue (ie. the oldest element in the queue). The element is removed from the queue container and the size of the queue is decreased by 1.
*/
#include <iostream>
#include <queue>

int main(){
    // Empty queue
    std::queue<int> myqueue; 

    // pushing elements into queue using push()
    myqueue.push(0); 
    myqueue.push(1); 
    myqueue.push(2); 

    // pop items from queue
    myqueue.pop(); // pops 0 from queue
    myqueue.pop(); // pops 1 from queue
  
    // print contents of queue
    while (!myqueue.empty()){ 
        std::cout << ' ' << myqueue.front(); 
        myqueue.pop(); 
    }
}