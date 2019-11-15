/*
    Author : Abhay Singh Yadav
    Date : Date format 21/10/2019
    Time : Time format 21:20
    Description :  Finding  the first unsorted element in the range [first, last).
                   It returns an iterator to the first unsorted  element  in the range.
*/

#include <iostream> 
#include <algorithm> 

int main(){

	int array[] = { 0,10, 22, 43, 44, 17, 10, 20, 89,67 }; 
	int *ptr; 
	ptr = std::is_sorted_until(array, array + 10); 

	std::cout <<"The first unsorted element is " << *ptr; 
        std::cout<<"\n";
	return 0; 
} 
