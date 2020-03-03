#include <stdlib.h>
#include <stdio.h>
/**
*str_concat - is a string.
*@s1: is a string
*@s2: is a string.
*Return: string.
*/
char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned int i = 0, j = 0, k = 0, h = 0;

	if (*s1 == '\0')
		*(s1 + 1) = '\0';
	if (*s2 == '\0')
		*(s2 + 1) = '\0';
	while (*(s1 + k) != '\0')
		k++;
	while (*(s2 + i) != '\0')
		i++;
	h = k + i;
	i = 0;
	ar = malloc((h + 1) * sizeof(char));
	for (j = 0; j < k; j++)
	{
		ar[j] = *(s1 + j);
	}
	for (j = k; j < h; j++)
	{
		ar[j] = *(s2 + i);
		i++;
	}
	return (ar);
}
