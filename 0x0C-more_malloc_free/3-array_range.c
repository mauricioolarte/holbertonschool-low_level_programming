#include <stdlib.h>
/**
 **_calloc - this function create a array.
*@size: size of array.
*@nmemb: is a character.
*Return: string.
*/
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);
	ar = malloc(((max - min) + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		ar[i] = min + i;
	return (ar);
}
