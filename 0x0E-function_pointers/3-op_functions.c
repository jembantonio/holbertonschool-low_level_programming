#include "3-calc.h"

/**
* op_add - performs addition on two integers
* @a: integer
* @b: integer
*
* Return: Sum of a and b
*/

int op_add(int a, int b)
{
	return ((a) + (b));
}



/**
* op_sub - performs subtraction on two integers
* @a: integer
* @b: integer
*
* Return: Difference of a and b
*/

int op_sub(int a, int b)
{
	return ((a) - (b));
}



/**
* op_mul - performs multiplication on two integers
* @a: integer
* @b: integer
*
* Return: Product of a and b
*/

int op_mul(int a, int b)
{
	return ((a) * (b));
}



/**
* op_div - performs division on two integers
* @a: dividend
* @b: divisor
*
* Return: Quotient of a and b
*/

int op_div(int a, int b)
{
	return ((a) / (b));	
}



/**
* op_mod - finds the remainder of two intgers
* @a: integer
* @b: integer
* 
* Return: Remainder of a and b
*/

int op_mod(int a, int b)
{
	return ((a) % (b));
}
