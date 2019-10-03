<h1>
Defination:-
</h1>
<p>
Given N number like 1 2 3 4...., next_permutation() will produce the next lexicographically greater permutation.
<br>For example my arrray
<br><code>
int a[]={1,2,3,4};
next_permutaion() function would produce
1,2,4,3
</code>
<br>
For N elements there would N!(factorial) permutations possible.
</p>
<br>
<b>Syntax:- next_permutaion(first,last);
<br>
<h3>
Example Code:-
</h3>
<code>
int main() {  
    
    int a[] = { 1, 2, 3 }; 
    
    sort(a, a+3); 
    
    cout << "The 3! possible permutations with 3 elements:\n"; 
    
    do { 
        cout << a[0] << " " << a[1] << " " << a[2] << "\n"; 
    } while (next_permutation(a, a+ 3)); 
  
    cout << "After loop: " << a[0] << ' ' 
         << a[1] << ' ' << a[2] << '\n'; 
    
    return 0; 

}
</code>
