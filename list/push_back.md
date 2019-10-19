list::push_back()

description:-
push_back() function is used to push elements into a list from the back. The new value is inserted into the list at the end, after the current last element and the container size is increased by 1.

Example:-
int main() 
{ 
    std::list<int> mylist{}; 
    std::mylist.push_back(7); 
    std::mylist.push_back(89); 
    std::mylist.push_back(45); 
    std::mylist.push_back(6); 
    std::mylist.push_back(24); 
    std::mylist.push_back(58); 
    std::mylist.push_back(43); 
  
    // list becomes 7, 89, 45, 6, 24, 58, 43 
   
  
    for (auto it = mylist.begin(); it != mylist.end(); ++it) 
        std::cout <<*it; 
        std::cout<<'\n';
} 
Output:

7
89
45
6
24
58
43 
