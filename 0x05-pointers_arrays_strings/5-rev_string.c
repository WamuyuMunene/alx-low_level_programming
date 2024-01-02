#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 *
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int first = 0;
	int last = length - 1;

	if (first < last)
	{
		char reverse = s[first];
		s[first] = s[last];
		s[last] = reverse;

		first++;
		last--;
	}
}
