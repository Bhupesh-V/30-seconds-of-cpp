/*
    Author : Kabindra Shrestha
    Date : Date format 19/10/2019
    Time : Time format 21:20
    Description : Removes all the elements of the map container
*/

#include <bits/stdc++.h>
#include <iostream>
#include <map>

void printMap(std::map<char, int> &asciiMap){
  std::map<char, int>::iterator it;
  std::cout << "\nASCII Values:" << std::endl;

  for (it = asciiMap.begin(); it != asciiMap.end(); ++it){
    std::cout << it->first << " : " << it->second << std::endl;
  }

  std::cout << "Map Size: " << asciiMap.size() << std::endl;

}

int main() {

  // creates a map that maps char and int
  std::map<char, int> asciiMap;

  // adds three key-value pairs to the map
  asciiMap['a'] = 97;
  asciiMap['b'] = 98;
  asciiMap['c'] = 99;

  // prints out the content of the map and the size of the map
  printMap(asciiMap);

  // removes all the elements of the map and leaves the size to 0
  asciiMap.clear();

  printMap(asciiMap);

  asciiMap['x'] = 120;
  asciiMap['y'] = 121;
  asciiMap['z'] = 122;

  printMap(asciiMap);
}
