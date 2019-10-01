// CPP program to illustrate 
// Implementation of swap() function 
#include <stack> 
#include <iostream> 
using namespace std; 

int main() 
{ 
		// stack container declaration 
	stack<int> mystack1; 
	stack<int> mystack2; 
	
	// pushing elements into first stack 
	mystack1.push(1); 
	mystack1.push(2); 
	mystack1.push(3); 
	mystack1.push(4); 
	
	// pushing elements into 2nd stack 
	mystack2.push(3); 
	mystack2.push(5); 
	mystack2.push(7); 
	mystack2.push(9); 

		// using swap() function to swap elements of stacks 
	mystack1.swap(mystack2); 

		// printing the first stack 
	cout<<"mystack1 = "; 
	while (!mystack1.empty()) { 
		cout<<mystack1.top()<<" "; 
		mystack1.pop(); 
	} 

		// printing the second stack 
	cout<<endl<<"mystack2 = "; 
	while (!mystack2.empty()) { 
		cout<<mystack2.top()<<" "; 
		mystack2.pop(); 
	} 
	return 0; 
} 
