#include "holberton.h"
/**
**_memset - this fill a n bytes whit value b.
*@s: chart.
*@n: b is integer.
*@b: is a integer.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;


		for (j = 0; j < n; j++)
		{
			s[j] = b;
		}

	return (s);
}
