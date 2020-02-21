#include "holberton.h"
/**
**leet - is as codification function.
*@s: is string.
*Return: integer.
*/
char *leet(char *s)
{
	int a, b;
	char cod[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	char cod_eq[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; cod[b] != '\0'; b++)
		{
			if (s[a] == cod[b])
				s[a] = cod_eq[b];
		}
	}
	return (s);
}
