#include <stdio.h>

/**
 * main - entry point
 *
 * print all possible combinations of two numbers
 *
 * Return: 0
*/

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9 ;a++)
	{
		for (b = 0; b <=9; b++)
		{
		if (a != b)
		{
			putchar(a);
			putchar(b);
		}
		if (a <= 9 && b <=9)
		{
		putchar(44);
		putchar(32);
	}}}
	putchar('\n');
	return (0);
}
