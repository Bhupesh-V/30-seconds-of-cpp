/*
    Author : Tript Sharma
    Date : 29/10/2019
    Time : 17:49
    Description : implementation of pop_back() function in lists
*/

int main(){
    //Initialization of list
    std::list <int> demo = {1,2,3,4};

    //Deleting/Popping elements from the list (from back) using the pop_back() function
    demo.pop_back();
    demo.pop_back();
    
    //Printing the list elements
    for (auto it = demo.begin(); it != demo.end(); ++it){
        std::cout << *it << " "; 
    }
}