    DESCRIPTION : 
    C++ Algorithm minmax_element() function is used to return a pair with an iterator pointing to the smallest value in the range[ first, last) as first element, and largest as second. 
    
    EXAMPLE : A sample code to demonstrate the use of minimax function.
    
    
    #include <algorithm>  
    #include <iostream>  
    #include <vector>  
    using  namespace std;  
      
    int main()  
    {  
        vector<int> v = { 3, 9, 1, 4, 2, 5, 9 };  
       
        auto result = minmax_element(v.begin(), v.end());  
        cout << "min element at: " << (result.first - v.begin()) << '\n';  
        cout << "max element at: " << (result.second - v.begin()) << '\n';  
        return 0;  
    } 
