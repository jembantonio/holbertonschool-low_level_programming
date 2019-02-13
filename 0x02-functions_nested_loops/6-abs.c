#include "holberton.h"

/**
* _abs - a function that computes the absolute value of an integer
* @r: an integer to be given the absolute value computation
*
* Return: absolute value of the integer
*/

int _abs(int r)
{
	if (r < 0)
		r *= (-1);

	return (r);
}
