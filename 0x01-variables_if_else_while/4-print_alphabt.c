#include <stdio.h>

/**
 * main - entry point
 *
 * prints alphabet in lowercase except two letters
 *
 * Return: 0
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}
	alpha++;
	putchar('\n');
	return (0);
}
