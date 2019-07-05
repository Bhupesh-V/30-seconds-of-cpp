// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Kamal Kant Sharma
    Date : 05/07/2019
    Time : 13:44
    Description : std::vector::push_back from STL is used to add new elements to the end of the vector.
*/

#include <iostream>
#include <vector>
#include<string>

void print(const std::string &vector_name, const std::vector<int> &vec){
	//Function to print the vector name and the vector 
    std::cout << vector_name << "{ ";

    for (auto num : vec){
        std::cout << num << " ";
    }

    std::cout << "}" << std::endl;
}


int main (){	
 	//Intializing the vectors  
 	std::vector<int> vector1 ;

 	print("Vector 1 : ", vector1);

	std::cout << "Adding elements using STL vector push_back function" << std::endl;

	vector1.push_back(1);
	vector1.push_back(2);
	vector1.push_back(3);

	print("Vector 1 : ", vector1);

	return 0;
}
