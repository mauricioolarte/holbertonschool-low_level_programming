#include <stdio.h>
#include <stdlib.h>
/**
*main - print the name of function
*@argc: integer.
*@argv: integer.
*Return: 0.
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
