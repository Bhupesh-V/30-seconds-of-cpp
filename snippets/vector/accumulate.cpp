// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Deepanshu Midha
    Date   : 01/10/2022
    Time   : 05:50
    Description : Returns the sum of all the values lying in a range between [first, last)
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> v = {3, 13, 27};
    int sum = 7;
    cout << "Result using accumulate: ";
    cout << accumulate(v.begin(), v.end(), sum);
 
	return 0;
}
