Defination:

All Consecutive groups of element containing either the same value or evaluating true when passed to predefined function, collapsed into a single element.
in other words, unique is used to remove duplicates of any element present consecutively in a range[first, last).
It performs this task for all the sub-groups present in the range having the same element present consecutively.
it does not delete all the duplicate elements, but it removes duplicacy by just replacing those elements by the next element present in the sequence which is not duplicate to the current element being replaced. All the elements which are replaced are left in an unspecified state.
Another interesting feature of this function is that it does not changes the size of the container after deleting the elements, it just returns a pointer pointing to the new end of the container, and based upon that we have to resize the container, or remove the garbage elements.

The below example can also be done using the third argument of unigue() by evaulting true when passed through a predefined function.
    template 
            ForwardIterator unique (ForwardIterator first, ForwardIterator last, BinaryPredicate Pred);
   pred => predifeined function


Example:-    

```cpp
    int main(){
        
                std::vector<int> v = { 1, 1, 2, 2, 4, 4, 6, 6, 3, 6, 8, 8,3 };
                
                std::vector<int>::iterator ip = std::unique(v.begin(), v.end());
                    // Now v becomes {1 2 4 6 3 6 8 3 * * * * *}
                    
                    // Resizing the vector so as to remove the undefined terms
                v.resize(std::distance(v.begin(), ip)); 
                    
                for (ip = v.begin(); ip != v.end(); ++ip) { 
                            cout << *ip << " "; 
                    } 
                    //output:-1 2 4 6 3 6 8 3
      below example         
        return 0;
        
        }
