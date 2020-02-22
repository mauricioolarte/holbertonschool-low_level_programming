#include "holberton.h"
/**
**cap_string - this funtion capitalize the string.
*@s: is a string.
*Return: pointer.
*/
char *cap_string(char *s)
{
	int j = 0, i = 0;
char sep[] = {',', ';', '.', '!', '?', '"',
	      '(', ')', '{', '}', '\t', '\n', ' '};

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[0] >= 'a' && s[0] <= 'z')
				s[0] -= 32;
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (s[i - 1] == sep[j])
					s[i] -= 32;
				j++;
			}
		}
		i++;
	}
	return (s);
}
