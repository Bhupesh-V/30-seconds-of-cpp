# unique

**Description :**  It ensures only unique values exist within a list. The complexity of it is O(N).

**Example** :

```cpp   
void showList ( std::list<int> aList){
        for( auto it = aList.begin() ; it != aList.end() ; it++)
        {
            std::cout<< *it <<"\t";
        }

    }


bool similarityCheck(int i , int j){
    return ( (j - i ) <5) ;
}

int main () {
    std::list<int> myList{1,7,6,3,1,9,-1,-6,102,51,-7,3};

    std::cout<<"My list: "; showList(myList);	
    std::cout<<std::endl;

    myList.sort();		
    std::cout<<"My list sorted : "; showList(myList);	
    std::cout<<std::endl;

    myList.unique();
    std::cout<<"My list after value check : "; showList(myList);	
    std::cout<<std::endl;

    myList.unique(similarityCheck);
    std::cout<<"My list after similarity check  : "; showList(myList);	
    std::cout<<std::endl;

    return 0;
}
```
**[Run Code](https://rextester.com/TLSE61354)**