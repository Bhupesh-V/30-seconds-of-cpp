/*
   Author : Mourya Choubey
   Date : 25/09/2020
   Time : 17:00
   Description : Find last occurence of given container in another container.
*/

#include <iostream>
#include<vector> 
#include<algorithm>

int main(){
    // first container
    std::vector<int> v{ 5, 3, 8, 5, 2, 9, 3, 8, 5 };
    // second container
    std::vector<int> u{ 3, 8, 5 };

    // find last occurence of vector u in vector v.
    std::vector<int>::iterator i;
    i = std::find_end( v.begin(), v.end(), u.begin(), u.end() );

    // displaying index of last occurence.
    std::cout << "INDEX: " << ( i - v.begin() ) << '\n';

    return 0;
}
