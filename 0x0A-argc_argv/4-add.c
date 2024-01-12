#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 *
 * @argc: int
 * @argv: char
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *value = argv[i];

		while (*value)
		{
			if (*value < '0' || *value > '9')
			{
				printf("Error\n");

				return (1);
			}
			value++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
