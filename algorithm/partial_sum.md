#include <iostream>
#include <numeric>
#include <vector>
#include <iostream>

int main()
{
    //declaring vector 1
    std::vector<int> v1 = {1,2,3,4,5,6,7};

    //declaring another vector 2 with size
    //same as vector 1. This vector will
    //store the partial sum
    std::vector<int> v2(v1.size());

    //calling the partial_sum function
    std::partial_sum(v1.begin(), v1.end(), v2.begin());

    //printing the first vector
    for(int i = 0; i < v1.size(); ++i){
        std::cout << v1[i] << " ";
    }

    std::cout << std::endl;

    //printing the second vector
    for(int i = 0; i < v2.size(); ++i){
        std::cout << v2[i] << " ";
    }

    return 0;
}
