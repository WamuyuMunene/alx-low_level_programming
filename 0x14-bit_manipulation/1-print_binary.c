#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary rep of a dec
 *
 * @n: unsigned long int
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int count = sizeof(unsigned long int) * 8;
	int i;

	for (i = count - 1; i >= 0; i--)
	{
		if ((n >> 1) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}
