#include<iostream>
#include<set>
int main() {
    /*
     Declaration
     Pair is a Data Structure which holds each data in pairs.
     First value is accessed by using .first and second by .second
     We can use (make_pair) for initializing tha pair.
     */
    std::pair<int,int> pii;
    /*
     Initially pii - > empty
     */
    pii = std::make_pair(1,3);
    std::cout << pii.first << " " << pii.second ;
    /*
     Output : 1 3
     */
}
