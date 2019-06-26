// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Bhupesh Varshney
    Date : 19/02/2019
    Time : 5:10 PM
    Description : number of elements in the range `[first, last)` satisfying specific criteria.
*/
#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
 
    int target = 3;     //Value to find
    // determines how many integers in a C++ vector matches a particular value.

    int num_items = std::count(v.begin(), v.end(), target);     //returns count of target
    std::cout << "Number: " << target << " count: " << num_items;

    return 0;
}
[RUN-CODE] -  https://rextester.com/LUM79533
