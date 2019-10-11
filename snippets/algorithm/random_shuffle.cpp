/*
   Author : Ajay Makwana
   Date : Date format 12/10/2019
   Time : Time format 12:46 AM
   Description : Randomly Shuffle Element of user defined vector.
*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {

    srand(unsigned(time(0)));
    vector<int> arr;

    // set some values:
    for (int j = 1; j < 10; ++j) {

        // 1 2 3 4 5 6 7 8 9
        arr.push_back(j);
    }

    // using built-in random generator
    random_shuffle(arr.begin(), arr.end());

    // print out content:
    cout << "arr contains:";
    for (auto i = arr.begin(); i != arr.end(); ++i) {
        cout << ' ' << *i;
    }

    cout << endl;

    return 0;
}
