#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 *
 * @argc: int
 * @argv: char
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int first;
	int second;
	int result = first * second;

	if (argc != 3);
	{
		printf("Error\n");

		return (1);
	}

	first = atoi(argv[1]);
	second = atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}
