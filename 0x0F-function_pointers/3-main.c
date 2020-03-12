#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - print op.
 *@argc: is integer.
 *@argv: is a array.
 *Return: integer.
 */

int main(int argc, char *argv[])
{
	int r;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] != '*' && *argv[2] != '+' && *argv[2] != '-' &&
	     *argv[2] != '/' && *argv[2] != '%') || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(&*argv[3]) == 0 && (*argv[2] != '%' || *argv[2] != '/'))
	{
		printf("Error\n");
		exit(100);
	}
	r = (*get_op_func(&*argv[2]))(atoi(&*argv[1]), atoi(&*argv[3]));
	printf("%d\n", r);
	return (0);
}
