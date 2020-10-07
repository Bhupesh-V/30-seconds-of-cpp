# Factorial

**Description :** This Algorith calculats the Factorial value of any given number, The Number are calculated via regresion meaning the function is calling it selfs until the lowest number 0 is given

**Example** :

```cpp
int factorialRecurrent(unsigned long InputValue)
{
	//Check if exeption 0 is given as input
	if (InputValue == 0) {

		// Value is 1 for 0
		return(1);
	}

	else {

		// Recurrent calculating Factorial
		return(InputValue * factorialRecurrent(InputValue - 1));
	}
}
```
**[Run Code](https://www.onlinegdb.com/r1ajEro8P)**
