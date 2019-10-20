std::equal() helps to compares the elements within the range [first_1,last_1) with those within range beginning at first_2.

Example:-
int main() 
{ 
    int v1[] = { 10, 20, 30, 40, 50 }; 
    std::vector<int> vector_1 (v1, v1 + sizeof(v1) / sizeof(int) ); 
  
    // Printing vector1 
    std::cout << "Vector contains : "; 
    for (unsigned int i = 0; i < vector_1.size(); i++) 
        std::cout << " " << vector_1[i]; 
    std::cout << "\n"; 
  
    // using std::equal() 
    // Comparison within default constructor 
    if ( std::equal (vector_1.begin(), vector_1.end(), v1) ) 
        std::cout << "The contents of both sequences are equal.\n"; 
    else
        std::cout<<"The contents of both sequences differ."; 
  
} 
Output:

Vector contains :  10, 20, 30, 40, 50
The contents of both sequences are equal.
