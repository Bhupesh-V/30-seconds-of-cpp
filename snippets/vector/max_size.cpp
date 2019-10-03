/* 
    Author : Y. Sai Sriram
    Date   : 29/09/2019
    Time   : 08:43
    Description : Returns the maximum number of elements that a vector can hold.
*/

#include <iostream>
#include <vector>

int main(){
	//create two vectors, one empty and one having 6 elements
	std::vector<int> vector1{10, 20, 30, 40, 50, 60};
	std::vector<int> vector2;
	
	//notice how both vectors' max_size function return the same value
	std::cout << "The maximum size of vector1 is: " << vector1.max_size() << std::endl;
	std::cout << "The maximum size of vector2 is: " << vector2.max_size() << std::endl;

	return 0;
}
