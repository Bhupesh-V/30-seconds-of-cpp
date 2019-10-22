 
 /*
    Author : Shubham Patra
    Date : 22/10/2019
    Time : 14:00
    Description : Fills the specified range with the value provided.
*/

#include <iostream>
#include <vector>
#include <algorithm>

void print(std::vector<int> &v){
      for(int i = 0; i < v.size(); ++i){
          std::cout << v[i] << ' ';
      }
      std::cout << '\n';
    }

    int main(){
      // Random vector
      std::vector<int> myVector{3, -5, 9, 7, 11, 12, 82, 34, 6, 78, 21, 17};

      // Print the vector
      std::cout << "Array: ";
      print(myVector);

      // Fill takes 3 arguments : starting index,last index and the value to be filled respectively 
      std::fill(myVector.begin(), myVector.end()-2,0);

      // Print the new vector
      std::cout << "New array: ";
      print(myVector);

      return 0;
    }
    
    
