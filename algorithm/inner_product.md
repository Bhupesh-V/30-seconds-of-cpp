# inner_product

**Description :**  Perform an inner product or another transform/reduce operation.

**Example** :

```cpp   
int main(){
	const std::vector<int> l {1, 2, 3, 4};
    const std::vector<int> r {3, 4, 5, 6};
    const int initial_value = 0;

    /* Default operation is to compute the inner product between two containers */
    const auto result =
        std::inner_product(l.cbegin(), l.cend(), r.cbegin(), initial_value);
    std::cout << "Expect result to be 50: " << result << '\n';

    /* Custom transform/reduce operations can also be performed by passing 
     * callable objects to the 5th and 6th arguments.
     * For example, below computes the sum of absolute differences. */
    auto abs_diff = [](const int a, const int b) { return std::abs(a - b); };
    auto add = [](const int a, const int b) { return a + b; };
    // The first callable object (add) is the reduce op.
    // While the second (abs_diff) is the transform op.
    const auto result2 =
        std::inner_product(l.cbegin(), l.cend(), r.cbegin(), initial_value,
                add, abs_diff);
    std::cout << "Expect result2 to be 8: " << result2 << '\n';

    return 0;
}
```
**[See Sample code](../snippets/algorithm/inner_product.cpp)**
**[Run Code](https://rextester.com/MMI36371)**
