#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 *get_op_func - return a value.
 *@s: is a char
 *Return: fuction
 */
int (*get_op_func(char *s))(int a, int b)
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

	while (*s != ops[i].op[0])
		i++;
	return (ops[i].f);

}
