/*
    Author : Guilherme de Morais Richter
    Date : Date format 24/10/2019
    Time : Time format 23:00
    Description : Returns a pair with an iterator pointing to the element with the smallest value in the range as first element, and the largest as second.
*/

#include <iostream>
#include <algorithm>   // library that contains std::minmax_element function
#include <array> // this library includes array functions

int main () {
  std::array<int,5> myarray {3,2,1,5,4}; // define myarray for manipulation

  auto result = std::minmax_element (myarray.begin(),myarray.end());

  std::cout << "min is " << *result.first; // returns the min element from the pair
  std::cout << ", at position " << (result.first-myarray.begin()) << '\n'; // returns the position of the min element
  std::cout << "max is " << *result.second; // returns the max element from the pair
  std::cout << ", at position " << (result.second-myarray.begin()) << '\n'; // returns the position of the max element

  return 0;
}
