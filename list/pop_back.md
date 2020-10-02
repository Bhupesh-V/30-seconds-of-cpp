# pop_back

**Description :** pop_back() function is used to pop or remove elements from a list from the back. The value is removed from the list from the end, and the container size is decreased by 1.

**Example** :

```cpp
// Demonstrates pop_back() 

#include <bits/stdc++.h>
using namespace std;
int main(){
   
   //creation of list
    list<int> myList;
   
   //inserting elements to a list
   myList.push_back(4);
   myList.push_back(9);
   myList.push_back(1);
   myList.push_back(3);
   
   //list before poping out the elements
   cout<<"list elements before deletion : ";
   for (auto i = myList.begin(); i != myList.end(); i++)
      cout << *i << " ";
   //removing elements from the end of a list using pop_back()
   myList.pop_back();
   // List after removing element from end
   cout << "\nList after deleting element from the end: ";
   for (auto i = myList.begin(); i != myList.end(); i++)
      cout << *i << " ";
   return 0;
}

