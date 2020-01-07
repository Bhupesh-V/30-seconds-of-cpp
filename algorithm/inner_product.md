# inner_product

**Description :** The function is used to perform the inner product of two ranges (i.e, vectors).

Inner Product explanation for v1={1, 2} and v2={3,4}:

        Default Inner Product = v1[0]*v2[0] + v1[1]*v2[2]
		                  = 1 * 3 + 2 * 4
		                  = 11

In the example above, the ranges are the two vectors (v1, v2).

In that case, the function takes 4 arguments. The initial position of the first range (v1\[0]) as an iterator, the final position of the first range (v1\[1]) as an iterator, the initial position of the second range (v2\[0]) as an iterator and an initial value for the accumulator (usually is 0). The implementation of the inner_product() is based on an accumulator and a product function which add and multiply two number respectively.

Another usage of inner_product is to change the default behaviour of the accumulator (a+b) and the product (a*b). We can do that by calling the inner_product() with two extra arguments. These two extra arguments can define the custom behaviour of the accumulator and the product.

In the coding example bellow we see the two different cases for inner_product function.

**Example** :
```cpp
    /* Custom accumulator behaviour for inner_product.
     * In this example the custom accumulator function happens to have the same
     * behaviour with the default accumulator function of inner_product. */
    int my_accumulator(int a, int b) {
        return a + b;
    }

    /* Custom product behaviour for inner_product.
       The default product function behaviour is to calculate the product of two
       numbers (a*b). Here we change that behaviour to calculate the difference. */
    int my_product(int a, int b) {
        return a - b;
    }

    int main() {
        std::vector<int> x = {1, 5, 3, 10};
        std::vector<int> y = {8, 0, 2, 6};
        int init_value = 0;

        /* First case of inner_product: Calculate the inner product of x and y */
        int default_inner_product_result = std::inner_product(x.begin(), x.end(),
                                                            y.begin(), init_value);

        std::cout << "The default inner_product result between x and y is: " <<
                    default_inner_product_result << std::endl;

        /* Second case of inner_product: Calculate the accumulative difference
           between x and y. */
        int custom_inner_product_result = std::inner_product(x.begin(), x.end(),
                                y.begin(), init_value, my_accumulator, my_product);

        std::cout << "The custom inner_product result between x and y is: " <<
                                        custom_inner_product_result << std::endl;
        return 0;
    }
```
**[Run Code](https://rextester.com/DBTRP29560)**
