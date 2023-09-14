#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - select opreator
 * @s: operator to compare
 * Return: opreator
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	for (; ops[i].op; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
	}

	return (NULL);
}
