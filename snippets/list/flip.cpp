// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide

/*
    Author: Mithil Joshi
    Date: 12/10/2022
    Time: 14:40
    Description: flip the bits of the calling bitset using flip().
*/

#include <iostream>
#include <bitset>
using namespace std;
int main() {
    bitset<6> bit1(string("100110"));
    bitset<10> bit2(string("0100001111"));
    // after applying flip() function with nothing passed as parameter it returns
    cout << bit1.flip() << endl;
    // after applying flip() function with 7 passed as parameter it returns
    cout << bit2.flip(7);
    return 0;
}