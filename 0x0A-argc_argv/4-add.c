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
	int sum, i = 0, j = 0, k;

	while (j < argc)
	{
		if (atoi(argv[i]) == 0 && argv[i] != 0)
			i++;
		j++;
	}
	if (i == (argc - 1))
		printf("0\n");
	else if (i != 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (k = 0; k < argc; k++)
		{
		sum += atoi(argv[i]);
		printf("%d\n", sum);
		}
	}

	return (0);
}
