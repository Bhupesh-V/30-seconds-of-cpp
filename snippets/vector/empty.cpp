/*
    Author : Drashti Modasara
    Date   : 12/10/2019
    Time   : 15:17
    Description : Returns 1 if the vector is empty and 0 otherwise.
*/

#include<iostream>
#include<vector>

int main() {
	std::vector<int> v1;
    v1.push_back(2); 
    v1.push_back(4); 
	// display the vector contents using std::vector::empty
	std::cout<< "When vector is not empty : v1.empty() = "<< v1.empty()<<std::endl;
	v1.clear();
	std::cout<< "When vector is empty : v1.empty() = "<< v1.empty()<<std::endl;
	return 0;
}
