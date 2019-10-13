# search_n

**Description :**  This function is used to find the number of times a certain element occurs in the array contigiously. The complexity of it is O(N).

**Example** :

```cpp   
	void showVector ( std::vector<int> myVector){
		for( auto it = myVector.begin() ; it != myVector.end() ; it++)
		{
			std::cout<< *it <<"\t";
		}
		
	}

	int main()
	{
		std::vector<int> v1{10,20,30,30,15,10,40};
		
		int count = 2; // number of times the chosen element should occur in our array
		int elem = 30; // element to be searched 
		
		showVector(v1);
		std::cout<<std::endl;
		
		auto it = std::search_n (v1.begin(),v1.end(), count , elem );
		
		if (it != v1.end()){
			std::cout<<"found "<< elem<<"  in position " << it - v1.begin() <<" occuring " << count <<" times"<<std::endl;
		}
		else{
			std::cout << "match not found" << std::endl;
		}
		
		count = 2;
		elem = 10;
		
		it = std::search_n (v1.begin(),v1.end(), count , elem );
		
		if (it != v1.end()){
			std::cout<<"found "<< elem<<"  in position " << it - v1.begin() <<" occuring " << count <<" times"<<std::endl;
		}
		else{
			std::cout << "match not found" << std::endl;
		}
		return 0;
	}
```
**[Run Code](https://rextester.com/BAK39426)**