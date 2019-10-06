// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
 Author : Siddharth Singha Roy
 Date : 07/10/2019
 Time : 12:30 AM
 Description : sort() function will be sort the elements where the top element is the smallest element
 */

#include<stack>
#include<iostream>

void sortStack(std::stack<int> &stackOne) {
    // Initializing the temporary stack
    std::stack<int> tempStack;
    while(!stackOne.empty()) {
        int element = stackOne.top();
        stackOne.pop();
        // If the temporary stack is empty push the element into tempStack
        if(tempStack.empty()) {
            tempStack.push(element);
        }
        else {
            // If the element at the top of tempStack is greater than current element of stackOne
            // then pop that element from tempStack and push to stackOne
            // Do this till the temporary stack is empty or current element is greater than or
            // equal to the element at top of temporary stack 
            while(!tempStack.empty() && tempStack.top() > element) {
                stackOne.push(tempStack.top());
                tempStack.pop();
            }
            tempStack.push(element);
        }
        // In the temporary stack at the top we have the largest element so when we add the elements to 
        // to stackOne, the smallest element is at the top
    }
    // Swap the temporary stack and stackOne
    while(!tempStack.empty()) {
        stackOne.push(tempStack.top());
        tempStack.pop();
    }
}

int main() {
    std::stack<int> stackOne;
    // Pushing elements into the stack
    stackOne.push(1);
    stackOne.push(2);
    stackOne.push(1);
    stackOne.push(3);
    stackOne.push(1);
    stackOne.push(5);
/*  stackOne now contain the elements 1,2,1,3,1,5
    where 5 will be the one to be popped first then 1,3 and so on */

/*  We want to sort the stack according in ascending orders
    After sorting the elements will be in the order 5,3,2,1,1,1 
    So that when they are popped we get 1,1,1,2,3,5*/

    sortStack(stackOne);
    while(!stackOne.empty()) {
        std::cout<<stackOne.top()<<" ";
        stackOne.pop();
    }
}