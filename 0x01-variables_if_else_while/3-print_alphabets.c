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

	alphal = 'A';

	while (alphal <= 'Z')
	{
		putchar(alphal);
		alphau++;
	}
	return (0);
}
