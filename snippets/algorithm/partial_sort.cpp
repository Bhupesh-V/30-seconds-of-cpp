 /*
    Author : David Bezhanishvili
    Date : 14/06/2020
    Time : 18:25
    Description : move n smallest elements to the beginning of an array
*/
#include <algorithm>
#include <functional>
#include <vector>
#include <iostream>
 
int main()
{
    int n=3; //move 3 smallest elements to the beginning
    std::vector<int> v = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
 
    std::partial_sort(v.begin(), v.begin() + n, v.end());
    for (int a : v) {
        std::cout << a << " ";
    }
}