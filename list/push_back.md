list::push_back()

description:-
push_back() function is used to push elements into a list from the back. The new value is inserted into the list at the end, after the current last element and the container size is increased by 1.

Example:-
int main() 
{ 
    std::list<int> mylist{ 1, 2, 3, 4, 5 }; 
    mylist.push_back(6); 
  
    // list becomes 1, 2, 3, 4, 5, 6 
  
    for (auto it = mylist.begin(); it != mylist.end(); ++it) 
        std::cout << '\n' << *it; 
} 
