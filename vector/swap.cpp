// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Pankaj Raghav
    Date : 28/05/2019
    Time : 23:15
    Description : std::vector::swap from STL is used to swap the contents of two vectors
*/

#include <iostream>
#include <vector>
#include<string>

void print(std::string vector_name, const std::vector<int> &vec){

	//Function to print the vector name and the vector 
    std::cout << vector_name << "{ ";

    for (auto num : vec){
        std::cout << num << " ";
    }

    std::cout << "}" << std::endl;
}

void swap_vectors(std::vector<int> &vec1, std::vector<int> &vec2){
	//Function to swap the vectors 
	vec1.swap(vec2); // Can also be vec2.swap(vec1) 
} 

int main (){
 	
 	//Intializing the vectors  
 	std::vector<int> vector1 = {1,2,3};
	std::vector<int> vector2 = {4,5,6,6};

	print("Vector 1 : ",vector1);
	print("Vector 2 : ",vector2);

	std::cout << "Performing swap using STL vector swap function" << std::endl;

	swap_vectors(vector1,vector2);

	print("Vector 1 : ", vector1);
	print("Vector 2 : ", vector2);

	return 0;
}