
Description:
 is a built-in function in C++ STL which returns an iterator pointing to the element in the container which is equivalent to k 
 passed in the parameter. In case k is not present in the set container, the function returns an iterator pointing to the 
 immediate next element which is just greater than k. If the key passed in the parameter exceeds the maximum value in the 
 container, then the iterator returned points to the last element in the set container. 
 Syntax:
 s.lower_bound(k);
 
// C++ function for illustration
// map::lower_bound() function
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // initialize container
    set<int>s;

    // insert elements in random order
    s.insert(2);
    s.insert(1);
    s.insert(5);
    s.insert(4);

    // when 2 is present
    auto it = s.lower_bound(2);
    cout << "The lower bound of key 2 is ";
    cout << (*it)<<endl;

    // when 3 is not present
    // points to next greater after 3
    it = s.lower_bound(3);
    cout << "The lower bound of key 3 is ";
    cout << (*it)<<endl;

    // when 6 exceeds
    it = s.lower_bound(6);
    cout << "\nThe lower bound of key 6 is ";
    cout << (*it)<<endl;
    return 0;
}

