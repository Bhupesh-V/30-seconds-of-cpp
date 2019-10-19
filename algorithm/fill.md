fill()
 :-The ‘fill’ function assigns the value ‘val’ to all the elements in the range [begin, end), where ‘begin’ is the initial position and ‘end’ is the last position.

Example:-

int main () 
{ 
  std::vector<int> vect(8); 
  
  // calling fill to initialize values in the 
  // range to 4 
 std:: fill(vect.begin() + 2, vect.end() - 1, 4); 
  
  for (int i=0; i<vect.size(); i++) 
   std::cout<<vect\[i];
   std::cout<<'\n';
  
  return 0; 
}
 
Output :

0 0 4 4 4 4 4 0
