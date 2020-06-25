/*
    Author : Kevin Demsich and Stacy Richmond
    Date : 17/06/2020
    Time : 18:23
    Description : Demonstration of the insert_or_assign function of the STL map
*/

#include <iostream>
#include <string>
#include <map>

int main() {
    // creating a container and inserting values using "insert" function
    std::map<std::string, int> guardians;

    // inserted object must be instantiated before it can be added to the map
    std::pair<std::string, int> starlord = std::pair<std::string, int>("Starlord", 250);
    guardians.insert(starlord);

    // objects can also be instatantiated and inserted in the same line
    guardians.insert(std::pair<std::string, int>("Gamora", 225));

    // values for valid keys can be replaced using the assignment operator
    guardians["Starlord"] = 275;

    // maps can be copied using the assignment operator
    std::map<std::string, int> heros;
    heros = guardians;

    // changing one map does not change the other
    heros.insert(std::pair<std::string, int>("Iron Man", 175));
    guardians.insert(std::pair<std::string, int>("Groot", 110));
    
    std::cout << "Guardians\n";
    std::cout << "Key\tValue\n";
    for(auto i = guardians.begin(); i != guardians.end(); ++i) {
        std::cout << i->first << "\t" << i->second << "\n";
    }

    std::cout << "Heros\n";
    std::cout << "Key\tValue\n";
    for(auto i = heros.begin(); i != heros.end(); ++i) {
        std::cout << i->first << "\t" << i->second << "\n";
    }
    
    return 0;
}
