#include "holberton.h"
/**
**_memset - this fill a n bytes whit value b.
*@s: chart.
*@n: b is integer.
*@b: is a integer.
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
