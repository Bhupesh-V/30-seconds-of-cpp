/*
    Author : Sayantan Sinharay
    Date   : 12/05/2021
    Time   : 19/11
    Description : Destroys the container object.
*/
#include <iostream>
#include <vector>

int main()
{
    // Creates a vector as myVector
    std::vector<int> myVector = { 1, 2, 3, 4, 5 };

    // Calls the destructor
    myVector.~vector();

    // Uncomment this the Code runs perfectly fine. Need to construct again as the object is destroyed.
    // myVector = { 1, 2, 3, 4, 5 };

    // Prints the value in myVector
    for (int x : myVector)
        std::cout << x << std::endl;

} // The destructor is called again by the vector Container [throws an error]
