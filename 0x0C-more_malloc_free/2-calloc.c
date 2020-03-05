#include <stdlib.h>
/**
 **_calloc - this function create a array.
*@size: size of array.
*@nmemb: is a character.
*Return: string.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < nmemb - 1; i++)
		ar[i] = 0;
	return (ar);
}
