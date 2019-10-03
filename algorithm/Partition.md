# Partition

**Description :** This function is used to partition the elements on basis of condition mentioned in its arguments. 

```cpp

    // Possible implementation of partition
    template<class ForwardIt, class UnaryPredicate>
    ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p){
        
        first = std::find_if_not(first, last, p);
        
        // Condition to verify if first equals to last
        if (first == last){
            return first;
        } 
    
        // Applying the condition 
        for (ForwardIt i = std::next(first); i != last; ++i){
            if (p(*i)){
                std::iter_swap(i, first);
                ++first;
            }
        }

        return first;
    }
    
    int main(){
        std::vector<int> my_vector = { 2, 1, 5, 6, 8, 7 };

        // Partitioning my_vector in basis of even numbers condition
        std::partition(my_vector.begin(), my_vector.end(), [](int x){ 
            return x%2==0; 
        });
        
        // Verifying if my_vector is partitioned
        if ( std::is_partitioned(my_vector.begin(), my_vector.end(), [](int x){ return x%2==0; } ) ) {
            std::cout << "The vector is partitioned!\n" << std::endl;
        } else{
            std::cout << "The vector is not partitioned!\n" << std::endl;
        }
            
    }

```

**[Run Code](https://rextester.com/FGSWB8639)**