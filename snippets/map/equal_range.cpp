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
	// create map
	std::map<int, std::string> hot_wheels;
	hot_wheels[0] = "beatnik bandit";
	hot_wheels[1] = "deora";
	hot_wheels[2] = "silhouette";
	hot_wheels[3] = "python";

	// use equal_range, returns pair of iterators to { begin of range, end of range } 
	auto sweet_sixteen = hot_wheels.equal_range(1);

	// print results
	std::cout << "eq_range lb is: {" << sweet_sixteen.first->first << ", " << sweet_sixteen.first->second << "}\n";
	std::cout << "eq_range ub is: {" << sweet_sixteen.second->first << ", " << sweet_sixteen.second->second << "}\n";

	return 0;
}
