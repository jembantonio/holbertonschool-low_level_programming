#include "holberton.h"

/**
* is_prime_number - a function that returns 1 if n is a prime number
* @n: integer
*
* Return: 1 if input is a prime number, 0 if not a prime number
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (factor(n, 2));
}



/**
* factor - checks given int if it is a factor of n
* @n: integer
* @fact: checker if it is a factor to n
*
* Return: 1 if it is a factor, 0 if not a factor
*/

int factor(int n, int fact)
{
	if (fact == (n / 2))
		return (1);
	else if (n % fact == 0)
		return (0);
	return (factor(n, fact + 1));
}
