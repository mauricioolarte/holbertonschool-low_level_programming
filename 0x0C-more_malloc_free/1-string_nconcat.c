#include <stdlib.h>
#include <stdio.h>
/**
*string_nconcat - is a string.
*@s1: is a string
*@s2: is a string.
*@n: integer.
*Return: string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i = 0, j = 0, k = 0, h = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + k) != '\0')
		k++;
	while (*(s2 + i) != '\0')
		i++;
	if (n >= i)
		n = i;
	n = k + n;
	i = 0;
	ar = malloc((h + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (j = 0; j < k; j++)
	{
		ar[j] = *(s1 + j);
	}
	for (j = k; j < h; j++)
	{
		ar[j] = *(s2 + n);
		n++;
	}
	return (ar);
}
