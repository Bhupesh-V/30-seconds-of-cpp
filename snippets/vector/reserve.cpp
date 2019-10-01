/*
    Author : Y. Sai Sriram
    Date   : 29/09/2019
    Time   : 09:03
Description : Helps specify the minimum size of a vector
*/

#include <iostream>
#include <vector>

int main(){
	//create an empty vector
	std::vector<int> myvector;

	//reserve a size of 'atleast' 5 elements
	myvector.reserve(5);
	
	//inserting 5 elements
	for(int i=0; i<5; i++)
	{
		myvector.push_back(i);
	}

	//when 6th element is added, vector automatically grows
	myvector.push_back(5);
	
	//prints '6'
	std::cout << "The size of the vector is: " <<  myvector.size() << std::endl;

	return 0;
}
