//
// Created by vineet on 04/10/2020.
//
#include<iostream>
#include<vector>
#include<numeric>
std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10};

int mul(int a, int b) { return a * b; }

int main() {
	std::vector<int> result(4);
	auto res = partial_sum(vec.begin(), vec.begin() + 4, result.begin());
	for(auto it = result.begin();it < res; it++) {
		std::cout<<*it<<std::endl;
	}
	res = partial_sum(vec.begin(), vec.begin() + 4, result.begin(), mul);
	for(auto it = result.begin();it < res; it++) {
		std::cout<<*it<<std::endl;
	}
}
