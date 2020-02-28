#include <stdio.h>
/**
*main - print the name of function
*@argc: integer.
*@argv: integer.
*Return: 0.
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
