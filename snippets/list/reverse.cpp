/*
    Author : Shameer Ahmad
    Date   : 25/10/2019
    Time   : 05:26
    Description :  This function is used to reverse the content of a list.
*/

#include <iostream>
#include <list>


int main(){
  // initializing a list 
  std::list<int> mylist{1, 2, 3, 4};
  
  //calling the reverse function
  mylist.reverse();
   // printing values of the reversed list
   for (auto value : mylist){
    std::cout << ' ' << value;
}

}
