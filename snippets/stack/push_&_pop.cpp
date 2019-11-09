/*
    Author : Nishanth Sanjeev
    Date : 07/10/2019
    Time : 23:15
    Description : How push() and pop() works, and what they are used for.
*/

#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    stack<int> demostack; //Initializing an empty stack.
    demostack.push(2); 
    demostack.push(3); 
    demostack.push(4);
    //We've added these three numbers to the stack. 
    // Printing stack content.
    while (!demostack.empty()) { 
        cout << demostack.top() << endl; 
        demostack.pop(); //Removing top element of the stack.
    } 
} 
