# at

**Description :** This function returns the reference to the value with the element as key k.


```
/*
   Output:
   ======
    Before:
    Computer Application: 94
    Chemistry: 98
    Physics: 87
    Maths: 90

    After:
    Computer Application: 100
    Chemistry: 98
    Physics: 97
    Maths: 100
*/

#include<iostream>  
#include<string> 
#include<unordered_map>  
  
 
// driver code 
int main() 
{ 
    // marks in different subjects  
    std::unordered_map<std::string,int> my_marks = { {"Maths", 90}, {"Physics", 87}, {"Chemistry", 98}, {"Computer Application", 94} }; 
    
    std::cout<<"Before:"<<std::endl;
    
    for (auto& i: my_marks) { 
        std::cout<<i.first<<": "<<i.second<<std::endl; 
    } 
                                      
    my_marks.at("Physics") = 97; 
    my_marks.at("Maths") += 10; 
    my_marks.at("Computer Application") += 6; 
    
    std::cout<<std::endl;          
    std::cout<<"After:"<<std::endl;
    
    
    for (auto& i: my_marks) { 
        std::cout<<i.first<<": "<<i.second<<std::endl; 
    } 
    
    return 0; 
}
```
**[Run Code](https://rextester.com/KPQK3750)**
