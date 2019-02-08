#include <stdio.h>

/**
* main - Entry Point
*
* Description: prints base16
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char n, a;

	for (n = '0'; n <= '9'; n++)
		putchar (n);
	for (a = 'a'; a <= 'f'; a++)
		putchar (a);
	putchar ('\n');

	return (0);

}
