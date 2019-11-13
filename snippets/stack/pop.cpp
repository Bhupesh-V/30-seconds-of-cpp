/*
    Author : Bhupesh Varshey
    Date : 13/11/2019
    Time : 01:47 PM
    Description : Demonstrating how pop() works in stack
*/

#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    stack<int> mystack; //Initializing an empty stack.
    mystack.push(2); 
    mystack.push(3); 
    // Printing stack content.
    while (!demostack.empty()) { 
        cout << demostack.top() << endl; 
    }
    mystack.pop();
    // Stack after pop()
    while (!demostack.empty()) { 
        cout << demostack.top() << endl; 
    }
} 
