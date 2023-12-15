#include <stdio.h>

/**
 * main - entry point
 *
 * prints base 16 in lowercase
 *
 * Return: 0
*/

int main(void)
{
	char alpha;
	int numb;

	for (numb = '0'; numb < 10; numb++)
	{
		putchar(numb);
	}

	for (alpha = 'a'; alpha <= 'e'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
