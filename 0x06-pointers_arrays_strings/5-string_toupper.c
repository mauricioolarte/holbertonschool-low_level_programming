#include "holberton.h"
/**
**string_toupper - change lowcase for upper
*@s: string.
*Return: string
*/
char *string_toupper(char *s)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	b = a;
	for (a = 0; a <= b; a++)
	{
		if (s[a] >= 97 && s[a] <= 122)
		{
			s[a] = s[a] - 32;
		}
	}
	return (s);
}
