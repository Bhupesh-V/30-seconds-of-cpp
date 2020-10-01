// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Ian Fillipe Pontes Ferreira 
    Date : 06/10/2019
    Time : 20:25
    Description : Is an STL algorithm which rearranges the list in such a way such that the element at the nth position is the one which should be at that position if we sort the list.
*/
#include <iostream> 
#include <algorithm> 
using namespace std; 
int main() 
{ 
    int v[] = { 3, 2, 10, 45, 33, 56, 23, 47 }, i; // 3, 2, 10, 45, 33, 56, 23, 47 
  
    // Using std::nth_element with n as 5 
    std::nth_element(v, v + 4, v + 8); 
  
    // Since, n is 5 so 5th element should be sorted 
    for (i = 0; i < 8; ++i) { 
        cout << v[i] << " "; 
    } 
    return 0; 
} 