#include <stdlib.h>
/**
*create_array - this function create a array.
*@size: size of array.
*@c: is a character.
*Return: string.
*/
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return('\0');
	ar = malloc(size * sizeof(char));
	if (malloc(size * sizeof(char)) == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
