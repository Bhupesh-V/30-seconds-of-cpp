/*
    Author : duongoku
    Date   : 10/1/2019
    Time   : 21:25
	Description : Exchange values of two objects
*/

#include <iostream>
#include <algorithm>

int main(){
	//Declare two example objects (same type)
	int a = 60, b = 50;

	//a:60 and b:50
	std::cout << "Before : a = " << a << " and b = " << b << "\n";

	std::swap(a,b); 	

	//a:50 and b:60, after swap
	std::cout << "After  : a = " << a << " and b = " << b;
}