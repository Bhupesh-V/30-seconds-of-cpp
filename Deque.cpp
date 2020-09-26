#include<iostream>
#include<deque>
int main() {
    /*
     Declaration
     Deque is a container that allows insertion and deletion at both ends.
     */
    std :: deque <int> dq;
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
    for(auto it : dq) {
        std :: cout << it << " ";
    }
    /*
     Output : 1 3
     */
}
