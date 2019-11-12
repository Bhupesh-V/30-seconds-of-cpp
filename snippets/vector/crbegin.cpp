/*
    Author : Jayshree Aishwarya
    Date : 18/10/2019
    Time : 22:20
    Description : It returns a const_reverse_iterator pointing to the last element in the container (i.e., its reverse beginning).
*/

#include <iostream> 
#include <vector> 
//Demonstrating the use of crbegin()
 
int main () 
{ 
  // the vector stores b'days in October among the students in a class 
  std::vector<int> vbday = {2, 7, 10, 16, 19, 20, 20, 21, 23, 26, 31};
 
  std::cout << "Birthdays are on : " << std::endl;
  for (auto i = vbday.crbegin() ;  i != vbday.crend(); ++i) {
    std::cout << "October " << *i;
    std::cout << std::endl;
  }
   
  return 0; 
} 
