# Description :
The following code calls a naive algorithm for computing a Fibonacci number. The Fibonacci sequence is defined as F(0)=0, F(1)=1, and F(n)=F(n−1)+F(n−2) for n≥2. So the sequence (starting with F(0)) is 0, 1, 1, 2, 3, 5, 8, 13, 21, ….

If we want to compute a single term in the sequence (e.g. F(n)), you can use the naive algorithm approach.

# Example :
```cpp
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
```
[Run Code](https://rextester.com/KADW21622)
