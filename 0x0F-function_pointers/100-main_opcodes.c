#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 *
 * @argc: arg count
 * @argv: arg variable
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;
	int n;

	if (argc != 2)
	{
		printf("Erro\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 1)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n - 1; i++)
	{
		printf("%02hhx ", ((char *)main)[i]);
	}
	printf("%02hhx\n", ((char *)main)[i]);

	return (0);
}
