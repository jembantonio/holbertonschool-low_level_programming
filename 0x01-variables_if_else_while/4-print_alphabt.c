#include <stdio.h>

/**
* main - Entry Point
*
* Description: program that prints the alphabet excluding q and e
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (alpha != 'q' || alpha != 'e')
			putchar (alpha);
		else
			continue;
	putchar ('\n');

	return (0);
}
