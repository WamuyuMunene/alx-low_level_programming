#include <stdio.h>

/**
 * main - entry point
 *
 * prints alphabet in lowercase followed by uppercase
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

	char alphau = 'A';

	while (alphau <= 'Z')
	{
		putchar(alphau);
		alphau++;
	}
	return (0);
}
