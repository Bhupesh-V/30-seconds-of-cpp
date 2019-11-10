/*
    Author : Nikhit
    Date : 20/10/2019
    Time : 16:15
    Description : Demonstration the emplace key-value pair in STL map
*/

#include <iostream>
#include <string>
#include <map>

int main() {
    // creating a container and inserting values using "emplace" function
    std::map<std::string, int> ages;
    ages.emplace("John", 45);
    ages.emplace("Stan", 65);
    ages.emplace("Mark", 25);
    ages.emplace("Zuck", 30);
    
    std::cout << "Key\tValue\n";
    for(auto i = ages.begin(); i != ages.end(); ++i) {
        std::cout << i->first << "\t" << i->second << "\n";
    }
    
    return 0;
}
