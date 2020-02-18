#include "holberton.h"
/**
 **_strcpy - retur the large of a string.
*@dest: is a direction of a sting.
*@src: is a direc.
*
*/
char *_strcpy(char *dest, char *src)
{
	int j = 0, i = 0;

	while (*(src + i) != '\0')
	{
		j++;
		i++;
	}

	for (i = 0; i <= j; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (&dest[0]);
}
