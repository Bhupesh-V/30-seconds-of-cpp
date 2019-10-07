// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Ian Fillipe Pontes Ferreira 
    Date : 06/10/2019
    Time : 20:41
    Description : Using transform function of STL, we can add arrays in single line.
*/
#include <iostream> 
#include <algorithm>
using namespace std; 
  
int main() 
{ 
    int arr1[] = {1, 2, 3}; // 1,2,3
    int arr2[] = {4, 5, 6}; // 4,5,6
    int n = sizeof(arr1)/sizeof(arr1[0]); 
    int res[n]; 
  
    /*
    Applies op to each of the elements and stores the value returned by each operation in the range that begins at result.
    */
    transform(arr1, arr1+n, arr2, res, plus<int>()); 
  
    // print result
    for (int i=0; i<n; i++) 
    cout << res[i] << " "; 
} 