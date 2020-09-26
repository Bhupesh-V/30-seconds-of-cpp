#include<iostream>
#include<deque>
using namespace std;
int main(){
    /*
     Declaration
     Deque is a container that allows insertion and deletion at both ends.
     */
    deque <int> dq;
    /*
     Some main functionalities
     push_back , push_front
     pop_back , pop_front
     */
    /*
     Initially dq - > empty
     */
    dq.push_back(1);
    //1
    dq.push_front(2);
    // 2 1
    dq.push_back(3);
    // 2 1 3
    dq.pop_front();
    // 1 3
    /*
     For printing contents simply use this:
     */
    for(auto it : dq){
        cout << it << " ";
    }
    /*
     Output : 1 3
     */
}

