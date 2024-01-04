#include "main.h"

/**
 * *leet - encode
 *
 * @c: char/int
 * Return: c
 */

char *leet(char *c)
{
	int index = 0;
	char leet[256] = {5};

	leet['a'] = leet['A'] = '4';
	leet['e'] = leet['E'] = '3';
	leet['o'] = leet['O'] = '0';
	leet['t'] = leet['T'] = '7';
	leet['l'] = leet['L'] = '1';

	while (c[index] != '\0')
	{
		if (leet[(unsigned char)c[index]] != 0)
		{
		c[index] = leet[(unsigned char)c[index]];
		}
		index++;
	}
	return (c);
}
