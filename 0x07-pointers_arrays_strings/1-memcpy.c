#include "holberton.h"
/**
**_memcpy - this fill a n bytes whit value b.
*@dest: chart.
*@src: b is integer.
*@n: is a integer.
*Return: string.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;


		for (j = 0; j < n; j++)
		{
			dest[j] = src[j];
		}

	return (dest);
}
