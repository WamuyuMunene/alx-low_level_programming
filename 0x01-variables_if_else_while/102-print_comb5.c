#include <stdio.h>

/**
 * main - entry point
 *
 * print all two combinations of two numbers
 *
 * Return: 0
*/

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
				if (a < c || (a == c && b < d))
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (a != '9' || b != '8' || c != '9' || d != '9')
					{
						putchar(44);
						putchar(32);
						}}}}}}
						putchar('\n');
						return (0);
}
