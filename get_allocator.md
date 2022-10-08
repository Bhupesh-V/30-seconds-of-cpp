/_
Author : Pequicu1
Date : 08/10/2022
Time : 18:42
Description : list::get_allocator() returns a copy of the allocator object associated with the list container.
_/

//Declare new list
std::list<int> List1;

//Declare a new int pointer
int \* pntr;

//Allocate an array of 2 elements using our list allocator:
pntr = List1.get_allocator().allocate(2);

for(int i = 0; i < List1.size(); ++i) std::cin >> p[i];

std::cout << "List1 contains: "
for(int i = 0; i < List1.size(); ++i){
std::cout << ' ' << p[i];
}
std::cout << std::endl;

//Deallocate the memory used to the array:
mylist.get_allocator().deallocate(p,2);
