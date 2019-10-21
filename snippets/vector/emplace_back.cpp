/*
    Author : Natália A. de Brito
    Date : 20/10/2019
    Time : 21:19
    Description : Constructs and places an element at the end of the vector
*/

#include <iostream>
#include <vector>

// Simple example struct
struct triangle {
  double base, height;
  triangle(double b, double h) : base(b), height(h) {}
};

void print(const std::vector<triangle>& v){
  std::cout << "triangles: {" << std::endl;
  for (auto t: v){
    std::cout << "\tbase: " << t.base;
    std::cout << "\theight: " << t.height << std::endl;
  }
  std::cout << '}' << std::endl;
}

int main(){
  //New vector with 2 triangles
  std::vector<triangle> v{triangle(1.1,1.2), triangle(2.1,2.2)};

  v.emplace_back(3.1,3.2); //Passing arguments used to build a triangle

  //Prints restulting vector
  print(v);
}