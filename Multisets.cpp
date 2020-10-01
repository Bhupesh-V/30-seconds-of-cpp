#include<iostream>
#include<set>
int main() {
    /*
     Declaration
     Multiset is a container similar to set except that multiset allows duplicate
     element to reside inside it.
     */
    std::multiset<int> ms;
     //All Functionalities same as set in C++
    /*
     Initially ms - > empty
     It will also be sorted as same as set does.
     */
    ms.insert(1);
    //1
    ms.insert(2);
    // 1 2
    ms.insert(1);
    // 1 1 2
    ms.insert(0);
    // 0 1 1 2
    /*
     For printing contents simply use this:
     */
    for(auto it : ms) {
        std::cout << it << " ";
    }
    /*
     Output : 1 3
     */
}
