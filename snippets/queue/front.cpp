// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
 Author : Timothy Itodo
 Date : 28/05/2019
 Time : 1:00 PM
 Description : front() function is used to reference the first element (ie. the oldest element) of the queue. This function can be used to fetch the first element of a queue.
 */
#include <iostream>
#include <queue>

int main(){
    // Empty queue
    std::queue<int> myqueue;
    
    // Add elements to queue using push()
    myqueue.push(2);
    myqueue.push(5);
    myqueue.push(4);
    myqueue.push(1);
    
    // Queue becomes 2, 5, 4, 1
    
    // Print the first/oldest element in the queue
    std::cout << myqueue.front();
}
