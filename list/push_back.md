list::push_back()

description:-
push_back() function is used to push elements into a list from the back. The new value is inserted into the list at the end, after the current last element and the container size is increased by 1.

Example:-
#include <iostream> 
#include <list> 
using namespace std; 
  
int main() 
{ 
    list<int> mylist{}; 
    mylist.push_back(7); 
    mylist.push_back(89); 
    mylist.push_back(45); 
    mylist.push_back(6); 
    mylist.push_back(24); 
    mylist.push_back(58); 
    mylist.push_back(43); 
  
    // list becomes 7, 89, 45, 6, 24, 58, 43 
   
  
    for (auto it = mylist.begin(); it != mylist.end(); ++it) 
        cout <<*it; 
        cout<<'\n';
} 
Output:

7
89
45
6
24
58
43 
