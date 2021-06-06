# lexicographical_compare

**Defination**: Compares the corresponding pair of elements of the two sequences identified by [first1, last1) and [first2, last2).
The comparison continues until either the element pair does not match, the pair(last1, last2) is reached, or either last1 or last2 is reached(if the sequences are not of equal size).That is in layman terms it compares two strings and returns a boolean value true/false
Syntax:- lexicographical_compare(first1,last1,first2,last2)for example:

string a[]={"dog", "cat", "cow"};

string b[]={"dog","pigglet","cow"};

here the algoritm matches on the first element but not for the second one, as c is lexicographically(Characters are compared using the Unicode character set. All uppercase letters come before lower case letters)
less than p.
the result of comparison would be false.


**Example Code**:-
```cpp
    int main(){   
        
        string a[] = {"dog", "cat", "cow"};
        
        string b[] = {"dog","pigglet","cow"};
      
        if( lexicographical_compare(a->begin(), a->end(), b->begin(), b->end())) { 
        
        cout << "True"; 
          
        } 
        else{ 
        
        cout << "False"; //this wil be printed
          
        } 
    
    return 0;
    
    } 
    
```
