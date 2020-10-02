#include <bits/stdc++.h> 
  
using namespace std; 
int main(void) 
{ 
    // Creating a container of type list 
    list<int> mylist; 
  
    // creating a pointer of type int 
    int* array; 
  
    // creating array using mylist get_allocator 
    array = mylist.get_allocator().allocate(3); 
  
    // inserting some data into the created array 
    for (int i = 0; i < 3; i++) 
        array[i] = i; 
  
    // printing details of the created array 
    for (int i = 0; i < 3; i++) 
        cout << array[i] << " "; 
} 

//contributed by Janhavi Jain (github: Janhavi404)