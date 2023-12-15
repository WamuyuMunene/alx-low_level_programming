#include <stdio.h>

/**
 * main - entry point
 *
 * print alphabet in lower case
 *
 * Return: 0
*/
int main(void)
{
	char alphal = 'a';

	while (alphal <= 'z')
	{
		putchar(alphal);
		alphal++;
	}
	putchar('\n');
	return (0);
}
