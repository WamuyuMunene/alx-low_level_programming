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
	char alpha = 'z';

	if (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
