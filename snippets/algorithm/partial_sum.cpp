 /*
    Author : Blen Assefa
    Date : Date format 12/02/2021
    Time : Time format 6:54
    Description : calculates the partial sum of elements of an array.
*/


#include <iostream>
#include <numeric>

int main()
{
    int val[] = {1,2,3,4,5};
    int result[5];

    // The partial sums up to the fifth element o
    std::partial_sum (val, val+5, result);
    std::cout <<"The partial_sum of the 5 elements is: ";

    //Printout result
    for (int i=0; i<5; i++) std::cout << result[i] << ' ';
    std::cout << '\n';
}