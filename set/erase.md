# erase

**Description :**
    This method is used to delete some elements from the set and make its size less than it's previous size.

**Example :**
```cpp
//Run Code To Demonstrate use of set.erase()
#include<iostream>
#include<set>

using namespace std;
void printSet(set<int> &A){
    set<int>::iterator it = A.begin();
    for(; it!=A.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;    
}
int main(){
    // Create a set object holding integers
    set<int> A {1,2,3,4,5,6,7,8,9,10};
    // It will delete element in 1st index
    printf("ORIGINAL - \n");
    printSet(A);
    auto it1 = A.begin();
    advance(it1, 3);
    A.erase(it1);
    // It will delete elements from 2nd index it 4th index
    printf("AFTER DELETING 3RD (ZERO INDEXING) ELEMENT - \n");
    printSet(A);
    it1 = A.begin();
    advance(it1, 2);
    auto it2 = A.begin();
    advance(it2, 5);
    A.erase(it1, it2);
    printf("AFTER DELETING 2ND TO 4TH (ZERO INDEXING) ELEMENTS - \n");
    printSet(A);
    return 0;
}
```
**[Run Code](https://ideone.com/DA31sP)**

