#include <stdio.h>

/**
 * main - entry point
 *
 * print numbers 0-9 with int type
 *
 * Return: 0
*/

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
