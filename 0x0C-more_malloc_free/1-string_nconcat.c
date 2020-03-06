#include <stdlib.h>
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
	unsigned int i = 0, sum, k = 0, h = 0;

	for (h = 0; s1[h] != '\0'; h++)
		h++;
	if (s1 == NULL)
		h = 0;
	for (k = 0; s2[k] != '\0'; k++)
		k++;
	if (s2 == NULL)
		k = 0;
	if (n >= k)
		n = k;
	sum = h + n + 1;
	ar = malloc(sum * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
		ar[i] = s1[i];
	for (i = h; i < (h + n); i++)
		ar[i] = s2[(i-h)];
	i++;
	ar[i] = '\0';
	return (ar);
}
