/*
    Author : jordanchristine
    Date : 01/10/2019
    Time : 08:07
    Description : Attempting to try out pop_front() from the list class
     for 30 seconds of C++.
*/
#include <iostream>
#include <list>
int main(){
  const int LARGEST_NUMBER = 100;
  std:: list<int> demo_list; //create list, "demo_list" of type int

  for(int i =10; i < LARGEST_NUMBER; i+=10){ //iterate through for loop to fill demo_list
    demo_list.push_back(i); //call push, to add each element
  }
  std::cout << "Popping out the elements in demo_list";
  while(!demo_list.empty()){ //while demo_list is not empty
    std::cout<< " " << demo_list.front(); //prints out front element, but does not remove it
    demo_list.pop_front(); //pops front out, removing it from the list
  }
  std::cout << "\nSize of list after popping out elements : " << demo_list.size();
}
