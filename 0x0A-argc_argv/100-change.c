#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -prints coins needed to make change
 *
 * @argc: int
 * @argv: char
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int cent;
	int coin = 0;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else
			cent--;
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
