#include <stdlib.h>
/**
 **_calloc - this function create a array.
*@size: size of array.
*@nmemb: is a character.
*Return: string.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ar;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ar = malloc(size * sizeof(unsigned int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = 0;
	return (ar);
}
