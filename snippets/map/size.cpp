/*
    Author : Kabindra Shrestha
    Date : Date format 25/10/2019
    Time : Time format 12:28
    Description : returns the size of the map, i.e. the number of elements in
   the map
*/

#include <iostream>
#include <map>

// Prints the current size of the map
void printSize(std::map<char, int> &asciiMap){
  std::cout << "Size of map (asciiMap.size()): " << asciiMap.size() << std::endl;
}

int main(){
  std::map<char, int> asciiMap;
    // creates a map

  // adds four elements in the map
  asciiMap['A'] = 65;
  asciiMap['B'] = 66;
  asciiMap['C'] = 67;
  asciiMap['D'] = 68;

  printSize(asciiMap);

  // adds two elements in the map
  asciiMap['E'] = 69;
  asciiMap['F'] = 70;

  std::cout << "\nAfter adding two more elements" << std::endl;
  printSize(asciiMap);
}