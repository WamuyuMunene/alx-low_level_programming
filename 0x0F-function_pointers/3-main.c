#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - execute functions
 *
 * @argc: arg count
 * @argv: arg variable
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));

	return (0);
}
