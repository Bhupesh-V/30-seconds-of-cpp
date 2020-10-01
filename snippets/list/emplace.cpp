/*
    Author : Sajjad Bin Samad
    Date   : 15/10/2019
    Time   : 12:02
    Description :  This function is used to extend list by inserting new element at a given position.

*/

#include <iostream>
#include <list>

int main (){
         // declaration of list 
         std::list< std::pair<int,char> > mylist;
    
        // using emplace() function to
        // insert new element at the
        // beginning of the list
        mylist.emplace ( mylist.begin(), 100, 'x' );
        mylist.emplace ( mylist.begin(), 200, 'y' );
    
        // printing the list
       // after inserting the value
        // at the beginning
        std::cout << "mylist contains:";
        for (auto& x: mylist)
               std::cout << " (" << x.first << "," << x.second << ")";

       std::cout << '\n';
  
       return 0;
}
