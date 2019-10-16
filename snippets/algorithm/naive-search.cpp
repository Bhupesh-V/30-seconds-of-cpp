/*
    Author : Ayran Olckers
    Date : 16/10/2019
    Time : 08:40
    Description : The following code calls a naive algorithm for computing a Fibonacci number.
*/

#include <iostream>
#include <cassert>

int fibonacci_naive_fast(int n) 
{

    /* Declare an array to store Fibonacci numbers. */
    int f[n+2];   // 1 extra to handle case, n = 0
    int i;

    /* 0th and 1st number of the series are 0 and 1*/
    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++)
    {
        /* Add the previous 2 numbers in the series
           and store it */
        f[i] = f[i-1] + f[i-2];
    }

    return f[n];
}

int main() 
{
    int n = 0;
    std::cin >> n;
    std::cout << fibonacci_naive_fast(n) << '\n';
    return 0;
}
