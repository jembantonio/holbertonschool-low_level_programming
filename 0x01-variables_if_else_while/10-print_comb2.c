#include <stdio.h>

/**
* main - Entry Point
*
* Description: program that prints the numbers 00 to 99
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 0; n <= 99; n++)
	{
		putchar ('0' + n / 10);
		putchar ('0' + n % 10);

		if (n < 99)
			putchar (',');
		if (n < 99)
			putchar (' ');
	}
	putchar ('\n');

	return (0);
}
