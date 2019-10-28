#include <iostream>
#include <map>
/*
    Author : Kabindra Shrestha
    Date : Date format 27/10/2019
    Time : Time format 23:22
    Description : Swaps the element of one map with another
*/

int main(){
  std::map<int, char> map1;
  std::map<int, char> map2;

  // add elements to map1
  map1[1] = 'a';
  map1[2] = 'b';
  map1[3] = 'c';

  // add elements to map2
  map2[26] = 'z';
  map2[25] = 'x';
  map2[24] = 'y';

  // print elements of map1 before the swap
  std::cout << "Elements of map1 before swap" << std::endl;
  for (std::map<int, char>::iterator it = map1.begin(); it != map1.end(); ++it){
    std::cout << it->first << " : " << it->second << std::endl;
  }

  // print elements of map2 after the swap
  std::cout << "\nElements of map2 before swap" << std::endl;
  for (std::map<int, char>::iterator it = map2.begin(); it != map2.end(); ++it){
    std::cout << it->first << " : " << it->second << std::endl;
  }

  map1.swap(map2);

  // print elements of map1 after the swap
  std::cout << "\nElements of map1 after swap" << std::endl;
  for (std::map<int, char>::iterator it = map1.begin(); it != map1.end(); ++it){
    std::cout << it->first << " : " << it->second << std::endl;
  }

  // print elements of map2 after the swap
  std::cout << "\nElements of map2 after swap" << std::endl;
  for (std::map<int, char>::iterator it = map2.begin(); it != map2.end(); ++it){
    std::cout << it->first << " : " << it->second << std::endl;
  }
}