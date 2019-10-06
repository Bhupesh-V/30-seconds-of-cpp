#include <iostream> 
#include <list> 
  
int main() { 
    //declaration of list container
    std:: list<int> mylist{ 1, 2, 3, 4, 5 }; 
    mylist.pop_back(); 
  
    // list becomes 1, 2, 3, 4 
  
    for (auto it = mylist.begin(); it != mylist.end(); ++it) {
        std:: cout << ' ' << *it; 
    }
} 