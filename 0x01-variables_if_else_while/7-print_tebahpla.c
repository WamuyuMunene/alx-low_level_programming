#include <stdio.h>

/**
 * main - entry point
 *
 * print alphabet in reverse
 *
 * Return: 0
*/

int main(void)
{
	int alpha = 'z';

	if (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
