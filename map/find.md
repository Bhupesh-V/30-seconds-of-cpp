// C++ program for illustration 
// of map::find() function 


#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

	// initialize container 
	map<int, int> mp; 

	// insert elements in random order 
	mp.insert({ 2, 30 }); 
	mp.insert({ 1, 40 }); 
	mp.insert({ 3, 20 }); 
	mp.insert({ 4, 50 }); 

	// returns the iterator for key = 3 
	auto it = mp.find(3);
    if(it!=mp.end())
    cout<<it->first<<" "<<it->second<<endl;
    auto it2 = mp.find(5);
    if(it2==mp.end())
      cout<<"Key =  5 is not present in the map"<<endl;

	return 0; 
} 
