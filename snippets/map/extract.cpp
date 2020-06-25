/*
    Author : Kevin Demsich and Stacy Richmond
    Date : 17/06/2020
    Time : 19:20
    Description : Demonstration of extracting a node from an STL map
*/

#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<int,std::string> users{{0, "kevin"}, {1, "stacy"}, {2, "tyler"}};

    // creates a node handler and extracts a node {key, value} from the map
	auto node_handler = users.extract(2);

	std::cout << "Users\n";
    std::cout << "Key\tValue\n";
    for(auto i = users.begin(); i != users.end(); ++i) {
        std::cout << i->first << "\t" << i->second << "\n";
    }

    // re-insert the moddified node into the map
	users.insert(std::move(node_handler));
    
    std::cout << "Users\n";
    std::cout << "Key\tValue\n";
    for(auto i = users.begin(); i != users.end(); ++i) {
        std::cout << i->first << "\t" << i->second << "\n";
    }
    
    
    return 0;
}
