// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
 Author : Timothy Itodo
 Date : 30/05/2019
 Time : 01:00 PM
 Description : size() function is used to return the size of the queue or the number of elements in the queue.
 */
#include <iostream>
#include <queue>

int main(){
    std::queue<int> myqueue;
    myqueue.push(4);
    myqueue.push(5);
    myqueue.push(9);
    myqueue.push(1);
    myqueue.push(3);
    
    // Queue becomes 4, 5, 9, 1, 3
    
    // Print the size of myqueue
    std::cout << myqueue.size();
}
