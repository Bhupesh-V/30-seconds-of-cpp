/*
    Author : Kevin Demsich and Stacy Richmond
    Date : 17/06/2020
    Time : 18:23
    Description : Demonstration the insert or assignment of the STL map
*/

#include <iostream>
#include <map>
#include <string>

int main() {
	// create and fill map
	std::map<int, std::string> galaxy;
	galaxy[0] = "starlord";
	galaxy[1] = "groot";
	galaxy[2] = "gamora";

	std::cout << "where is groot?\n";

	// create the pair to search for
	std::pair<int, std::string> groot = { 1, "groot" };
	std::map<int, std::string>::iterator it = galaxy.begin();
	while (it != galaxy.end()) {
		// use value_comp to check if target's index is after, at, or before iterator index
		if (galaxy.value_comp()(*it, groot)) {
			std::cout << "groot is after index: " << it->first << '\n';
		}
		else if (it->first == groot.first) {
			std::cout << "groot is at index " << it->first << '\n';
			break;
		}
		else {
			std::cout << "groot is before index " << it->first << '\n';
			break;
		}
		++it;
	}
	return 0;
}
