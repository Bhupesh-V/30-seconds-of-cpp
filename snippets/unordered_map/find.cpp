/*
    Author : Kevin Demsich and Stacy Richmond
    Date : 24/06/2020
    Time : 19:19
    Description : Demonstration the insert or assignment of the STL map
*/
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
	// create unordered map
	std::unordered_map<std::string, std::string> track;
	track["living room"] = "1:15";
	track["bedroom"] = "1:05";
	track["greenhouse"] = "1:05";
	track["attic"] = "0:55";
	track["sandbox"] = "1:25";
	track["basement"] = "0:52";

	std::cout << "input track name to search, input \'q\' to quit\n";
	std::string input = "";
	// loop search program
	while (true) {
		// input query
		std::cout << "$ ";
		std::cin >> input;
		if (input == "q") {
			return 0;
		}
		// find the query
		auto it = track.find(input);
		if (it == track.end()) {
			std::cout << "track not found";
		}
		else {
			std::cout << it->first << " track length is " << it->second;
		}
		std::cout << '\n';
	}
}
