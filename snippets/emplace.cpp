/*
    Author : Manav sethi  
    Date : 07/11/2019
    Time : 
    Description : The function returns an iterator which points to the newly inserted element.
    
*/
using namespace std; 
  
int main() 
{ 
    vector<int> vec = { 10, 20, 30 }; 
  
    // insert element by emplace function 
    // at front 
    auto it = vec.emplace(vec.begin(), 15); 
  
    // print the elements of the vector 
cout << "The vector elements are: ";  
    for (auto it = vec.begin(); it != vec.end(); ++it) 
        cout << *it << " "; 
  
    return 0; 
} 
