std::search

Description:-

It searches the sequence [first1, last1) for the first occurrence of the subsequence defined by [first2, last2), and returns an iterator to its first element of the occurrence, or last1 if no occurrences are found.

Example:-
int main() 
{ 
    int i, j; 
  
    // Declaring the sequence to be searched into 
   std::vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7 }; 
  
    // Declaring the subsequence to be searched for 
    std::vector<int> v2 = { 3, 4, 5 }; 
  
    // Declaring an iterator for storing the returning pointer 
    std::vector<int>::iterator i1; 
  
    // Using std::search and storing the result in 
    // iterator i1 
    i1 = std::search(v1.begin(), v1.end(), v2.begin(), v2.end()); 
  
    // checking if iterator i1 contains end pointer of v1 or not 
    if (i1 != v1.end()) { 
        std::cout << "vector2 is present at index " << (i1 - v1.begin()); 
    } else { 
        std::cout << "vector2 is not present in vector1"; 
    } 
  
    return 0; 
} 
Output:

vector2 is present at index 2
