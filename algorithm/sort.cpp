/*
    Author : Vaibhav Rawat
    Date : 06/06/2019
    Time : 10:26 PM
    Description : Sort the given numbers in ascending and descending order. 
*/
#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int> v{ 10,8,6,4,2,9,7,5,3,1 };
 
    std::vector<int> vector_sort_in_ascending(v);
	
	std::vector<int> vector_sort_in_descending(v);
	//Passing the vector v as a constructor, copies all elements of v into the
	//vector_sort_in_ascending and vector_sort_in_descending vectors  	
	
	std::sort(vector_sort_in_ascending.begin(), vector_sort_in_ascending.end());
	//Sorting in ascending order
	
	std::sort(vector_sort_in_descending.rbegin(), vector_sort_in_descending.rend());
	//Using rbegin() and rend() returns reverse iterator pointing to the last and
	//first element respectively. So, it essentially "reverses" the sorted vector

	std::cout << "Elements sorted in ascending order:\n " ;
	
    for(int iter=0;iter<vector_sort_in_ascending.size();iter++){
		std::cout << vector_sort_in_ascending[iter] << " " ;
	}
	
	std::cout << "\nElements sorted in descending order:\n " ;
	
    for(int iter=0;iter<vector_sort_in_descending.size();iter++){
		std::cout << vector_sort_in_descending[iter] << " " ;
	}

    return 0;
}