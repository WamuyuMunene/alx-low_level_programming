#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *argstostr - concat all arguments
 *
 * @ac: int
 * @av: char
 *
 * Return: null or pointer
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int nl = 0;
	int si = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac && av[i] != NULL; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			nl++;
			j++;
		}
		nl++;
	}

	str = malloc(sizeof(char) * (nl + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac && av[i] != NULL; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[si++] = av[i][j++];
		}
		str[si] = '\n';
	}
	str[si] = '\0';

	return (str);
}
