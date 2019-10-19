vector::data()
is an STL in C++ which returns a direct pointer to the memory array used internally by the vector to store its owned elements.

example:-
int main() {
  std::vector<int> vec;
  std::vec.push_back(1);
  std::vec.push_back(2);
  std::vec.push_back(42);
  std::vec.push_back(24024);
  {
    int*arr=vec.data();
    std::cout << arr;
  }
  
    return 0; 
} 
