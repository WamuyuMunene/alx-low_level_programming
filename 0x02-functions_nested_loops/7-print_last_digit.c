#include "main.h"

/**
 * print_last_digit - prints last digit of number
 *
 * @a: parameter
 *
 * Return: value of last digit
*/

int print_last_digit(int a)
{
	int ones = a % 10;
	{
	if (ones < 0)
	{
		ones *= -1;
	}}
	_putchar(ones + '0');
	return (ones);
}
