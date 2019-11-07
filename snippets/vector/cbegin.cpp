/*
    Author : Spencer Koss
    Date   : 10/01/2019
    Time   : 5:11
    Description :  The function returns an iterator which is used to iterate container.

*/

#include <iostream>
#include <vector>

int main()
{
    //Create a vector
    std::vector<int> vectorExample;

    //5 integer values are stored
    vectorExample.push_back(1);
    vectorExample.push_back(2);
    vectorExample.push_back(3);
    vectorExample.push_back(4);
    vectorExample.push_back(5);

    //Displays the contents of the vector using c.begin() to point to the
    //beginning of the vector
    std::cout << "Contents of the vector:" << std::endl;
    for (auto itr = vectorExample.cbegin();
         itr != vectorExample.end(); ++itr)
    {
        std::cout << *itr << std::endl;
    }
    return 0;
}
