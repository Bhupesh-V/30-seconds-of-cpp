# search

**Description :**  This function is used to find a subsequence in a given sequence The complexity of it is O(N*M) where N = Sequence size and M = Subsequence size.

**Example** :

```cpp   
	void showVector ( std::vector<int> myVector){
			for( auto it = myVector.begin() ; it != myVector.end() ; it++)
			{
				std::cout<< *it <<"\t";
			}
			
		}

	bool valCheck (int i, int j) {    
		return (i==j);
	}

	int main () {
		std::vector<int> sequence{1,7,6,3,9,-1,-6,102,51,-7,3};

		// using default comparison:
		std::vector<int> subsequence{3,9,-1,-6};
		std::cout<<"Sequence: "; showVector(sequence);
		std::cout<<"\nSubsequence: "; showVector(subsequence);
		std::cout<<std::endl;
		
		auto it = std::search (sequence.begin(), sequence.end(), subsequence.begin(), subsequence.end(), valCheck);

		if (it!=sequence.end())
		std::cout << "subsequence found at position " << (it-sequence.begin()) << '\n';
		else
		std::cout << "subsequence not found\n";

		return 0;
	}
```
**[Run Code](https://rextester.com/PXGWH84765)**