#include "holberton.h"

/**
* _sqrt_recursion - a function that return the natural square root of a number
* @n: integer
*
* Return: square root of n, if no natural square root return -1
*/

int _sqrt_recursion(int n)
{
	if (n > 0)
		return (checker(n, 1));
	if (n < 0)
		return (-1);
	else
		return (0);
}



/**
* checker - checks if an integers has a natural square root
* @n: integer
* @sqrt: incrementing int that checks for the natural square root of n
*
* Return: sqrt if n has a natural square root, -1 if else
*/

int checker(int n, int sqrt)
{
	if (sqrt * sqrt > n)
		return (-1);
	else if (sqrt * sqrt == n)
		return (sqrt);
	return (checker(n, sqrt + 1));
}
