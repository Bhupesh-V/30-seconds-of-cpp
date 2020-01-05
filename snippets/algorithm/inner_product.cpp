/*
    Author : Klajdi Bodurri
    Date : 05/01/2020
    Time : 16:07 PM
    Description : Shows two different usages of inner_product().
*/

#include <iostream>
#include <vector>
#include <numeric>

/* Custom accumultor behaviour for inner_product.
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

    /* Second case of inner_product: Calculate the acculumative difference
       between x and y. */
    int custom_inner_product_result = std::inner_product(x.begin(), x.end(),
                            y.begin(), init_value, my_accumulator, my_product);

    std::cout << "The custom inner_product result between x and y is: " <<
                                    custom_inner_product_result << std::endl;
    return 0;
}
