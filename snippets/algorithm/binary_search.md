/*
    Author : Deeksha Daga
    Date : 02/10/2019
    Time : 14:27 
    Description : search an element using binary search algorithm.
*/
#include<iostream.h>
void main(){
	int n, i, arr[50], search, first, last, middle;
	std::cout<<"Enter total number of elements :";
	std::cin>>n;
	std::cout<<"Enter "<<n<<" number :";
	for (i=0; i<n; i++){
		std::cin>>arr[i];
	}
	std::cout<<"Enter a number to find :";
	std::cin>>search;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last){
		// If element is greater than mid, then it can only be present in right subarray
		if(arr[middle] < search){
			first = middle + 1;
		}
		// If the element is present at the middle itself 
		else if(arr[middle] == search){
			std::cout << search << " found at location " << middle+1 << "\n";
			break;
		}
		// If element is smaller than mid, then it can only be present in left subarray 
		else{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
    	// We reach here when element is not present in array
	if(first > last){
		std::cout << "Not found! "<<search<<" is not present in the list.";
	}
}
