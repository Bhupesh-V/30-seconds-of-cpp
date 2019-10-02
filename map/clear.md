Description : This function removes all elements from the map container (which are destroyed), leaving the container with a size of 0.
Example:
int main(){
    std::map<char,int> m;
    //Suppose we add some entries in the map,example
    m['a'] = 14;
    m['d'] = 23;
    m['s'] = 16;
    m['f'] = 10;
    std::cout<<m.size();      //this will tell us the current size of the map
    m.clear();
    //Now again try to print the size of map after using clear()
    std::cout<<m.size();      //this should be 0 now,as we have cleared all of the elements from the map
    
    return 0;
}
