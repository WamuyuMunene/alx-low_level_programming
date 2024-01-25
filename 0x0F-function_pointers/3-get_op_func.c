#include "calc.h"
#include <stdlib.h>

/**
 * get_op_func - obtains correct function
 *
 * @s: char
 *
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t caller[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (caller[i].op[0] == s[0])
		{
			return (caller[i].f);
		}
		i++;
	}
	return (NULL);
}
