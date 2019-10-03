**Description**

**reference operator [g]** – Returns a reference to the element at position ‘g’ in the vector

**at(g)** – Returns a reference to the element at position ‘g’ in the vector

**front()** – Returns a reference to the first element in the vector

**back()** – Returns a reference to the last element in the vector

**data()** – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

// C++ program to illustrate the element accesser in vector 





#include <bits/stdc++.h> 

using namespace std; 

  int main() 
{ 

    vector<int> g1; 
  
    for (int i = 1; i <= 10; i++) 
        g1.push_back(i * 10); 
  
    cout << "\nReference operator [g] : g1[2] = " << g1[2]; 
  
    cout << "\nat : g1.at(4) = " << g1.at(4); 
  
    cout << "\nfront() : g1.front() = " << g1.front(); 
  
    cout << "\nback() : g1.back() = " << g1.back(); 
  
    // pointer to the first element 
    int* pos = g1.data(); 
  
    cout << "\nThe first element is " << *pos; 
    return 0; 
} 


Output:
Reference operator [g] : g1[2] = 30

at : g1.at(4) = 50

front() : g1.front() = 10






back() : g1.back() = 100
The first element is 10
