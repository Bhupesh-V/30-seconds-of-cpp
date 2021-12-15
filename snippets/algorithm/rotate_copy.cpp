/*
    Author : Varun Bansal
    Date : Date format 02/09/2019
    Time : Time format 02:00
    Description : Copies the elements while bringing the last elements from mid to front and front to mid at last.
*/

// rotate_copy algorithm example
#include <iostream>     											
#include <algorithm>    
#include <vector>       

int main () {
  int myints[] = {10,20,30,40,50,60,70};

  std::vector<int> myvector (7);

  std::rotate_copy(myints,myints+3,myints+7,myvector.begin());

  // print out content:
  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}

