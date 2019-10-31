#include <iostream> 
#include <vector> 
using namespace std; 
  
int main () 
{ 
  // initializing vector with values 
  vector<int> vect = {10, 20, 30, 40, 50}; 
  
  // for loop with crbegin and crend 
  for (auto i = vect.crbegin(); i != vect.crend(); i++) 
    cout << ' ' << *i;  //printing results 
   
  cout << '\n'; 
  return 0; 
} 
