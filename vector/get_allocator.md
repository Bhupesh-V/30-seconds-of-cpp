/*
 Author: Parul Parikh
 Date: 13/09/2019
 Time: 1:07 AM
	
 Description: Allocator is an object that is responsible for dynamic memory allocation/deallocation. get_allocator() is used to allocate memory chunks of memory. It returns a copy of the allocator object associated with the container.

 Syntax: allocator_type get_allocator() const;
*/

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

	std::vector<int> myVector;
	int * p;
	unsigned int i;
	
	// allocate an array with space for 5 elements using vector's allocator:
  	p = myvector.get_allocator().allocate(5);

  	// construct values in-place on the array:
  	for (i=0; i<5; i++){
	    myvector.get_allocator().construct(&p[i],i);	
	} 

  	std::cout << "The allocated array contains:";
  	for (i=0; i<5; i++){
	    std::cout << ' ' << p[i];
	}
  	std::cout << '\n';

  	// destroy and deallocate:
  	for (i=0; i<5; i++){
	    myvector.get_allocator().destroy(&p[i]);
	}  
	
	myvector.get_allocator().deallocate(p,5);

return 0;
}

