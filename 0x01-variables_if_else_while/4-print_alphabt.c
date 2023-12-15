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

	for (alpha <= 'z'; alpha != 'q'; alpha != 'e')
		putchar(alpha);
		alpha++;
	return (0);
}
