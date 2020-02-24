#include "holberton.h"
/**
**_strchr - retur a string after value c.
*@s: string.
*@c: is a integer.
*Retutn: Null o s.
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((s + i));
		}
		i++;
	}
	return ('\0');
}
