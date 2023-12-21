#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * prints string followed by new line
 *
 * Return: 0
*/

int main(void)
{
	char c[] = "_putchar";
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(c[a]);
	}
	return (0);
}
