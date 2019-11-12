#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    //sample vector
    std::vector<int> v1 = {2,5,8,7,4,5};
    
    //printing first element
    std::cout << "First element before making heap : " << v1.front() << std::endl;
    //outputs 2
    
    //transforming vector into heap with make_heap()
    make_heap(v1.begin(),v1.end());
    //printing first element
    std::cout << "First element in heap : " << v1.front();
    //outputs 8
    
    return 0;
}
