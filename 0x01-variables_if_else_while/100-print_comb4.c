#include <stdio.h>

/**
 * main - entry point
 *
 * print all possible combinations of three numbers
 *
 * Return: 0
*/

int main(void)
{
        int a;
        int b;
	int c;

        for (a = '0'; a <= '9' ; a++)
        {
                for (b = '0'; b <= '9'; b++)
                {
			for (c = '0'; c <= '9'; c++)
			(
				 if (a != b != c && a < b < c)
				{
					putchar(a);
					putchar(b);
					pitchar(c);
					if (a < '7' || b < '8' || c < '9')
					{
						putchar(44);
						putchar(32);
						}}}}
						putchar('\n');
						return (0);
}
