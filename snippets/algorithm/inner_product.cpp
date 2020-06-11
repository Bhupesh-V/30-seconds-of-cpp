/*
    Author : Sang Nguyen
    Date : 12/06/2020
    Time : 12:20
    Description : calculate inner product on the given range
*/
#include <vector>
#include <numeric>
#include <iostream>
int main(){
    // creates three vectors a, b and c
    std::vector<int> a{1, 2, 3, 4, 5};
    std::vector<int> b{5, 4, 2, 3, 1};
    std::vector<int> c{4, 3, 2, 1, 5, 3};

    // calculates inner product between a and b
    int r1 = std::inner_product(a.begin(), a.end(), b.begin(), 0);

    // calculates inner product between a and c
    int r2 = std::inner_product(a.begin(), a.end(), c.begin(), 0);

    // display the results
    std::cout << "Inner product of a and b: " << r1 << '\n';
    std::cout << "Inner product of a and c: " << r2 << '\n';
}