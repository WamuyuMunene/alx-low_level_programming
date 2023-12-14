#include <stdio.h>
#include <unistd.h>

/**
 * main -entry point of program
 *
 * Return: 1
 *
 * write - used to print string
*/
int main(void)
{
	const char *quotes = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quotes, 59);
	return (1);
}
