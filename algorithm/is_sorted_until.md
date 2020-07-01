<h1>is_sorted_until</h1>
<p><strong>Description:</strong>std::is_sorted_until is used to find out the first unsorted element in the range [first, last). It returns an iterator to the first unsorted element in the range, so all the elements in between first and the iterator returned are sorted.</p>

<h6>Example:</h6>
          
          #include <iostream> 
         #include <algorithm> 

       using namespace std; 
        int main() 
     {    
     int v[] = { 1, 2, 3, 4, 7, 10, 8, 9 }, i; 
  
    int* ip; 
  
    // Using std::is_sorted_until 
    ip = std::is_sorted_until(v, v + 8); 
  
    cout << "There are " << (ip - v) << " sorted elements in "
         << "the list and the first unsorted element is " << *ip; 
             return 0; 
     } 


<br>
<h3><a href="https://rextester.com/NLRDYA45690">RUN CODE</a><h3>
