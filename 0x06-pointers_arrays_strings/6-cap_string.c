#include "holberton.h"
/**
**cap_string - this funtion capitalize the string.
*@s: is a string.
*Return: pointer.
*/
char *cap_string(char *s)
{
	int j = 0, i = 0;
	char sep[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ',
		      '\t', '\n'};

	while (s[i] != '\n')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 0, sep[i] != '\0'; j++)
			{
				if (s[i - 1] == sep[i])
					s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
