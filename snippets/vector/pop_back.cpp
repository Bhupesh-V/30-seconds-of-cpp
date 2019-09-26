/*
        Author: Y. Sai Sriram
        Date: 26/09/2019
	Time: 6:25
        Description : std::vector::pop_back from STL is used to remove elements of a vector from the end.
*/

#include <iostream>
#include <vector>

void print(const std::vector<int> &vec)
{
        for(auto elem : vec) //auto automatically assigns variable type to elem; here, elem becomes an integer type as vec is a vector of arrays
                std::cout << elem << " ";

        std::cout << "\n";
}

int main()
{
        std::vector<int> vector1;

        vector1 = {10,20,30,40,50,60,70};
        std::cout << "The original vector was: \n";
        print(vector1);

        vector1.pop_back(); //Notice how there is no argument to pop_back, unlike push_back 
        vector1.pop_back(); //Last two elements of the vector have been deleted

        std::cout << "The modified vector is: \n";
        print(vector1);

        return 0;
}

