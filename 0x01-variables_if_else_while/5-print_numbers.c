#include <stdio.h>

/**
 * main - entry point
 *
 * prints single digits of base 10
 *
 * Return: 0
*/

int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
