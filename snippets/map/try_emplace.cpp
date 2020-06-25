/*
    Author : Kevin Demsich and Stacy Richmond
    Date : 17/06/2020
    Time : 18:51
    Description : Demonstration the insert or assignment of the STL map
*/
#include <iostream>
#include <string>
#include <map>

int main() {
	// create map
	std::map<std::string, std::string> bash_arena;

	// use try_emplace to attempt to insert some kv pairs
	bash_arena.try_emplace("fastest", "vulture");
	bash_arena.try_emplace("middle", "sooo fast");
	bash_arena.try_emplace("slowest", "mega duty");
	bash_arena.try_emplace("fastest", "INSERT WILL FAIL HERE");

	std::cout << "map bash_arena contains:\n";

	// print the contents of the map
	std::map<std::string, std::string>::iterator it;
	for (it = bash_arena.begin(); it != bash_arena.end(); it++) {
		std::cout << "{" << it->first << ", " << it->second << "}\n";
	}
}
