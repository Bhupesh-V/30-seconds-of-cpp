#include <iostream> 
#include <list> 
  
int main() { 
    // declaration of list 
    std::list<int> lis = { 5, 6, 7, 8, 9, 10 }; 
  
    auto it = lis.emplace(lis.begin(), 2); 
  
    // inserts at the beginning of the list 
    lis.emplace(it, 1); 
  
    std::cout << "List: "; 
    for (auto it = lis.begin(); it != lis.end(); ++it) {
        std::cout << *it << " "; 
    }
    return 0; 
}