#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * Return: 0 0r 1
*/

int _islower(int c)
{
	char alpha;

	if (alpha >= 97 || alpha <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
