/*
    Author : Jayshree Aishwarya
    Date : 18/10/2019
    Time : 23:00
    Description : It’s a public member function that returns a const_reverse_iterator pointing to the element preceding the first element.
*/

#include <iostream> 
#include <vector> 
//Demonstrating the use of crend()

int main () 
{ 
  // the vector stores number of students in different classes
  std::vector<int> vNumn = {65, 87, 112, 92, 104, 57, 74};
  int k=0;
  
  std::cout << "Number of students in different classes : " << std::endl;
  for (auto i = vNumn.crbegin() ;  i != vNumn.crend(); ++i) {
    std::cout << "Class " << ++k << " " << *i;
    std::cout << std::endl;
  }

  return 0; 
} 
