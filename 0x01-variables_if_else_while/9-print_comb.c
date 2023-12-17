#include <stdio.h>

/**
 * main - entry point
 *
 * print all possible combinations of single digit numbers
 *
 * Return: 0
*/

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a);
		if (a < 9)
		{
		putchar(',');
		putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
