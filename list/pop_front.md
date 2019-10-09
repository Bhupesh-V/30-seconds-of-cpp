
Descritpion:
pop_front() function is used to pop or remove elements from a list from the front. 
The value is removed from the list from the beginning, and the container size is decreased by 1.
// CPP program to illustrate 
// pop_front() function 
#include <iostream> 
#include <list> 
using namespace std; 
  
int main() 
{ 
    list<int> mylist{ 1, 2, 3, 4, 5 }; 
    mylist.pop_front();  //Removes "1" from the list as it is on the front of the list.
  
    // list becomes 2, 3, 4, 5 
  
    for (auto it = mylist.begin(); it != mylist.end(); ++it) 
        cout << " " << *it; 
} 
