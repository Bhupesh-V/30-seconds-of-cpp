/*
    Author : jordanchristine
    Date : Date format 01/10/2019
    Time : Time format 16:54
    Description : trying out unique() from the list class for 30 seconds of C++.
*/

#include <iostream>
#include <list>

int main(){
  std:: list<int> myList;
  for(int i = 0; i < 10; i++){ //for loop to fill list with elements of 5
    myList.push_back(5);
  }
  myList.unique(); //removes duplicates
  std:: cout <<myList.size() << "\n" ; // outputs 1 to console, since all elements were 5

  return 0;
}
