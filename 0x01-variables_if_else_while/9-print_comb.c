#include <stdio.h>

/**
* main - Entry Point
*
* Description: prints single digit numbers seperated by commas
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar ('0' + n);

		if (n < 9)
			putchar (',');
		if (n < 9)
			putchar (' ');
	}
	putchar('\n');

	return (0);
}
