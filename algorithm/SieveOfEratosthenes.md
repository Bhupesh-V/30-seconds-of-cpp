# Sieve Of Eratosthenes

**Description :** the Sieve of Eratosthenes is an ancient algorithm for finding all prime numbers up to any given limit, and we can minupulate that algorithm in C++ be defining it with a function, so we can use it like that:

```
SieveOfEratosthenes(int n)
```

**Example**:

```cpp
#include <bits/stdc++.h>
#include <iostream>

int main() {
	// get primes numers till 50
	int n = 10;

	std::vector<int> SieveOfEratosthenes(int n);
	bool prime[n + 1]; // initialize a bool array
	memset(prime, true, sizeof(prime)); // fill the vector with a value of true


	std::vector<int> res;

    // n = 10, p = 2, p*p = 4, 4 <= 10
	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) { // if prime[p] is true, then it's a prime
			for (int i = p * p; i <= n; i += p) // update all multiplies of p >= p*p
				prime[i] = false;
		}
	}

	for (int p = 2; p <= n; p++) {
		if (prime[p]) {
			res.push_back(p); // push primes to the result vector
		}
	}

	for (int elem : res) {
		std::cout << elem << " "; // print out the prime numbers
	}
}
```
