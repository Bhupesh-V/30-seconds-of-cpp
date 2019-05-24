// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Rickey Patel
    Date : 23/05/2019
    Time : 03:50 PM
    Description : push() function is used to insert an element at the back of the queue. The element is added to the queue container and the size of the queue is increased by 1.
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
  
    // print contents of queue
    while (!myqueue.empty()){ 
        std::cout << ' ' << myqueue.front(); 
        myqueue.pop(); 
    } 
}