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

	h = strlen(s1);
	k = strlen(s2);
	if (n >= k)
		n = k;
	if (h = 0 || s1 == NULL)
	{
		ar = malloc((n + 1) * sizeof(char));
		if (ar == NULL)
			return (NULL);
	}
	if (k = 0 || s2 == NULL)
	{
		ar = malloc((h + 1) * sizeof(char));
		if (ar == NULL)
			return (NULL);
	}
	ar = malloc((k + h + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
		ar[i] = s1[i];
	for (i = h; i < (h + k); i++)
		ar[i] = s2[(i-h)];
	i++;
	ar[i] = '\0';
	return (ar);
}
