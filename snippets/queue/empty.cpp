// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
 Author : Kais Saradi
 Date : 09/06/2021
 Time : 09:00 PM
 Description : empty() function is used to check if the queue container is empty, by checking if its size is zero. This function returns true, if the queue is empty or false, otherwise.
 */
#include <iostream>
#include <queue>

int main(){
    // Empty queue
    std::queue<int> myqueue;

    int q = 0
    while(myqueue.empty()){
        q +=1
        std::cout << q;
        if (q == 10){
            myqueue.push(1)
        }
    }
}
