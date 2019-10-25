/*
    Author : Guilherme de Morais Richter
    Date : Date format 24/10/2019
    Time : Time format 23:00
    Description : Returns a pair with the smallest as first element, and the largest as second.
*/

#include <iostream>     
#include <algorithm>    // library that contains the std::minmax function

int main () {
  auto result = std::minmax({3,2,1,5,4}); // put a list as argument in 'result' variable

  std::cout << "minmax(): ";
  std::cout << result.first << ' ' << result.second << '\n'; // returns the min (first) and the max (second) element from the list.
  return 0;
}
