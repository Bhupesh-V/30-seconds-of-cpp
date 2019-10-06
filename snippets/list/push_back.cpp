#include <iostream>
#include <list>

int main() { 
    // declaration of list container
    std::list<int> mylist{ 1, 2, 3, 4, 5 }; 
    mylist.push_back(6); 
  
    // list becomes 1, 2, 3, 4, 5,6 
  
    for (auto it = mylist.begin(); it != mylist.end(); ++it) {
       std:: cout << ' ' << *it;//printing output
    } 
} 