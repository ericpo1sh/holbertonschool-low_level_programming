#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - gets the operator for the function
 * @s : symbol
 * Return: the operator to other file
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

	if (s != NULL)
		while (ops[i].op != NULL && *(ops[i].op) != *s)
			i++;
	return (ops[i].f);
}
