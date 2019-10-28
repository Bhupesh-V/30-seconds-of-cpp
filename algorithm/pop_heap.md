/*
    Author : Abhay Singh Yadav
    Date : Date format 28/10/2019
    Time : Time format 15:00
    Description :  Deleting maximum element from the heap using pop_heap.
*/
#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std; 
int main(){ 
	vector<int> v1 = {47, 23, 67, 1, 20, 50, 36, 13}; 
	make_heap(v1.begin(), v1.end()); 	//making heap
	
	for (int &x : v1){  			//printing heap before using pop_heap
	   cout << x << " ";
       } 
        cout<<"\n";
	
	pop_heap(v1.begin(), v1.end()); 	//using pop_heap
	v1.pop_back(); 		
	for (int &x : v1){  			//display heap after using pop_heap
          cout << x << " "; 
	}
	cout<<"\n";
	
	return 0; 
} 

