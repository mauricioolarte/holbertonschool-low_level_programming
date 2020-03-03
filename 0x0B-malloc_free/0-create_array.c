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

	ar = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
