#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks for empty string
 *
 * @s: char
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int start;
	int end;
	int length = strlen(s);

	for (start = 0, end = length -1; start < end; start++, end--)
	{
		if (s[start] != s[end])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
}
