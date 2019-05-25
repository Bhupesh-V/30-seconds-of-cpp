/*
    Author : Xenofon Karamanos
    Date : 24/05/2019
    Time : 12:17
    Description : Showcase std::vector::erase to delete a specific value from vector.

*/


#include <iostream>
#include <vector>
#include <algorithm>

void print(const std::vector<int> &vector){
    std::cout << "{ ";

    for (auto num : vector){
        std::cout << num << " ";
    }

    std::cout << "}" << std::endl;
}

int main(){
  std::vector<int> vector1;

  vector1 = {1,2,3,4,5,6,7,8,9};
  std::cout << "Original vector" << '\n';
  print(vector1);

  // Remove 1st Element
  vector1.erase(vector1.begin());
  std::cout << '\n' << "Removing 1st Element" << '\n';
  print(vector1);

  // Remove range of elements
  vector1.erase(vector1.begin()+2,vector1.begin()+5);
  std::cout << '\n' << "Removing elements in 3rd position to 6th including" << '\n';
  print(vector1);

  // Bonus Example
  // Remove element with value 'valueToRemove' from vector 'vector2'
  // Using 'algorithm' C++ STL library to remove a specific value
  int valueToRemove = 7;
  std::vector<int> vector2 = { 5,6,1,7,12,3,7,9,7,2};
  std::cout << '\n' << "Removing elements with value = 7" << '\n';
  print(vector2);
  vector2.erase( std::remove(vector2.begin(),vector2.end(),valueToRemove),vector2.end());
  print(vector2);
}
