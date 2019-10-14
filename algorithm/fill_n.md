fill_n()
description:-
In fill_n(), we specify beginning position, number of elements to be filled and values to be filled. The following code demonstrates the use of fill_n.


int main() 
{ 
   std:: vector<int> vect(8);
  
    // calling fill to initialize first four values 
    // to 7 
    std::fill_n(vect.begin(), 4, 7); 
  
    for (int i=0; i<vect.size(); i++) 
       std:: cout << ' ' << vect[i]; 
    std::cout << '\n'; 
    return 0;
}
output
7
7
7
7
0
0
0
0

