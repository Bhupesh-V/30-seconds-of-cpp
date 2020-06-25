/*
    Author : Kevin Demsich and Stacy Richmond
    Date : 25/06/2020
    Time : 00:12
    Description : Demonstration of extracting a node from an STL map
*/
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
	// create map
	std::unordered_map<std::string, int> table;
	table["ace"] = 2;
	table["king"] = 1;
	table["queen"] = 3;
	table["jack"] = 2;
	table["ten"] = 1;

	// loop through a set of keys to check if their count in the map is greater than zero
	for (const auto& card : {"ace", "reverse", "blue eyes white dragon", "jack", "joker"}) {
		if (table.count(card) > 0) {
			std::cout << "There is a " << card << " on the table. There are " << table[card] << " of them.";
		}
		else {
			std::cout << "There is no " << card << " on the table.";
		}
		std::cout << '\n';
	}
	return 0;
}
