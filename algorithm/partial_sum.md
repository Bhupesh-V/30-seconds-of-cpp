# partial_sum
**Description** : Is an STL algorithm which computes the sum of part of a sequence.

**Example** : Given a set {4,7,14,18}, The partial sum from 4 to 14 would be 25.

```cpp
int main() {
int sum = 0;
std::vector<int> v { 1,2,3,4,5,6,7};

    std::cout << "Computing the partial sum from numbers 1 to number 3: "<< std::endl;
    for (int i = 0; i < 3; i++)
    {
        sum +=v[i];
    }

    std::cout << "the sum is: " << sum << std::endl << std::endl;
    sum =0;

    std::cout << "Computing the partial sum from numbers 1 to number 5: "<< std::endl;
    for (int i = 0; i < 5; i++)
    {
        sum +=v[i];
    }

    std::cout << "the sum is: " << sum << std::endl << std::endl;
    sum =0;

    std::cout << "Computing the partial sum from numbers 1 to number 7: "<< std::endl;
    for (int i = 0; i < v.size(); i++)
    {
        sum +=v[i];
    }

    std::cout << "the sum is: " << sum << std::endl << std::endl;


    return 0;
}
```