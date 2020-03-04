#include <stdlib.h>
/**
**argstostr - this function return a pointer.
*@ac: this columns.
*@av: this arrow.
*Return: pointer.
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, m;
	char *arra;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
	}
	arra = malloc((k + ac + 1) * sizeof(char));
	if (arra == NULL)
		return (NULL);
	m = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arra[m] = av[i][j];
			m++;
		}
		arra[m] = '\n';
		m++;
	}
	arra[m] = '\0';
	return (arra);
}
