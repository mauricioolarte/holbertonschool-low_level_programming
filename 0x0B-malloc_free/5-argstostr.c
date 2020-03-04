#include <stdlib.h>
/**
**argstostr - this function return a pointer.
*@ac: this columns.
*@av: this arrow.
*Return: pointer.
*/
int char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0;
	char **ar;

	if (ac < 0)
		return ('\0');

	ar = malloc((ac) * sizeof(int *));
	for (k = 0; k < ac; k++)
	{
		ar[k] = malloc(*av * sizeof(int));
	}
	for (i = 0; i < av; i++)
	{
		for (j = 0; j < ac; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
