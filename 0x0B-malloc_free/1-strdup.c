#include <stdlib.h>
/**
*_strdup - is a string.
*@str: is a string.
*Return: string.
*/
char *_strdup(char *str)
{
	char *ar;
	unsigned int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i) != '\n')
		i++;
	ar = malloc(i * sizeof(char));
	if (ar == NULL)
		return ('\0');
	while (i)
	{
		ar[j] = *(str + j);
		j++;
		i--;
	}
	return (ar);
}
