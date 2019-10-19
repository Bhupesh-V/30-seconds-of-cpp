vector::data()
is an STL in C++ which returns a direct pointer to the memory array used internally by the vector to store its owned elements.

example:-
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  std::vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(42);
  vec.push_back(24024);
  {
    int* arr = vec.data();
    cout << arr << endl; /* output: 0x9bca028 */
    cout << arr[3] << endl; /* output : 24024 */
  }
  
    return 0; 
} 
