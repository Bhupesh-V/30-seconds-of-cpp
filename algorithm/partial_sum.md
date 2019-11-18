# partial_sum

**Description :** Assign to every element in the range [start, end) the sum of the corresponding elements in the range [start, element):
y0 = x0
y1 = x0 + x1
y2 = x0 + x1 + x2
etc ...
.

**Example** :
```cpp
    #include <iostream>
    #include <bits/stdc++.h>


    int main(){
        std::vector<int> my_vector = { 1,2,3,4,5 };
        int partial_sum = 0;
        int partial_sum_result[5];
        
        for(int i=0; i<5; i++){
            std::cout << "element -> " << my_vector[i]; 
            partial_sum = partial_sum + my_vector[i];
            std::cout << " - partial_sum " << partial_sum <<'\n'; 
            partial_sum_result[i] = partial_sum;
        }
        
        std::cout << "\n";
        std::cout << "partial_sum:\n"; 
        for (int i=0; i<5; i++){
            std::cout << partial_sum_result[i] << ' ';
        } 
    
    }

```
**[Run Code](https://rextester.com/IRWF36007)**