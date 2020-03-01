#include <stdio.h>
#include <stdlib.h>
/**
*main - print the name of function
*@argc: integer.
*@argv: integer.
*Return: 0.
*/
int main(int argc, char *argv[])
{
	int sum = 0, i = 0, j = 1, k;

	while (j < argc)
	{
	  if (atoi(argv[j]) == 0 && argv[j] != 0)
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
		for (k = 1; k < argc; k++)
		{
		sum += atoi(argv[k]);
		}
		printf("%d\n",sum);
			}

	return (0);
}
