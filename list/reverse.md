# reverse

**Description :**  This function is used to reverse the order of the elements in the given list .The complexity of it is O(N) .

**Example** :

```cpp   
	void showList ( std::list<int> aList){
			for( auto it = aList.begin() ; it != aList.end() ; it++)
			{
				std::cout<< *it <<"\t";
			}			
		}
	

	int main () {
		std::list<int> myList{1,7,6,3,9,-1,-6,10,3};

		std::cout<<"Current list: "; showList(myList);
		std::cout<<std::endl;
		
		myList.reverse();
		
		std::cout<<"Reversed list: "; showList(myList);
		std::cout<<std::endl;
		
		return 0;
	}
```
**[Run Code](https://rextester.com/UZNI58100)**