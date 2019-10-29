/*
    Author : Tript Sharma
    Date : 29/10/2019
    Time : 17:39
    Description : implementation of push_back() function in lists
*/

int main(){
    //Initialization of list
    std::list <int> demo;

    //Adding elements to the list using the push_back() function
    demo.push_back(1);
    demo.push_back(4);
    demo.push_back(3);

    //Printing the list elements
    for (auto it = demo.begin(); it != demo.end(); ++it){
        std::cout << *it << " "; 
    }
}