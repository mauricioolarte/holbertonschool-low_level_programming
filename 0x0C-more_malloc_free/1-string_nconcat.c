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
	unsigned int i,  sum, k, h;
	char *ar;
	if (s1 == NULL)
		h = 0;
	else
		for (h = 0; *(s1 + h); h++)
			h++;
	if (s2 == NULL)
		k = 0;
	else
		for (k = 0; *(s2 + k); k++)
			k++;
	if (n >= k)
		n = k;
	sum = h + n + 1;
	ar = malloc(sum * sizeof(char));
	for (i =0; i < sum; i++)
		ar[i] = '\0';
	for (i = 0; i < h; i++)
		ar[i] = s1[i];
	for (i = h; i < (h + n); i++)
		ar[i] = s2[(i-h)];

	return (ar);
}
