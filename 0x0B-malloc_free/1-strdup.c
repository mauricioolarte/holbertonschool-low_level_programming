#include <stdlib.h>
/**
*_strup - is a string.
*Return: string.
*/
char *_strdup(char *str)
{
	char *ar;
	unsigned int i = 0, j = 0;

	if (str == '\0')
		return('\0');
	while (*(str + i) != '\n')
		i++;
	ar = malloc(i * sizeof(char));
	while (i)
	{
		ar[j] = *(str + j);
		j++;
		i--;
	}
	return (ar);
}
