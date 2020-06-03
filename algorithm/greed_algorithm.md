# greed_algorihtm
**Description** : Function MakeChange repents the Greedy algorithm which, when presented with a list of options, chooses the option that is optimal at that point of time.
However, the choice of an option does not consider additional subsequent options, and may or may not lead to an optimal solution. The function returns the total amount in change.

**Example**
```cpp
    void MakeChange(int givenAmount,int (&change)[4]){
        while(givenAmount >= 25){
            change[0] += 1;
            givenAmount -= 25;
        }
        while(givenAmount >= 10){
            change[1] += 1;
            givenAmount -= 10;
        }
        while(givenAmount >= 5){
            change[2] += 1;
            givenAmount -= 5;
        }
        while(givenAmount >= 1){
            change[3] += 1;
            givenAmount -= 1;
        }
    }
    int main(){
        //Change[0] represents Quarters
        //Change[1] represents Dimes
        //Change[2] represents Nickels
        //Change[3] represents Pennies
        int change[4] = {0,0,0,0};
        
        MakeChange(96,change);
        
        std::cout << "Quarter: " << change[0] << std::endl;
        std::cout << "Dimes: " << change[1] << std::endl;
        std::cout << "Nickels: " << change[2] << std::endl;
        std::cout << "Pennies: " << change[3] << std::endl;
    }
```
**[Run Code](http://cpp.sh/8haq5d)**

