#include "holberton.h"
/**
**rot13 - this function code root 13.
*@s: is a string.
*Return: string.
*/
char *rot13(char *s)
{
	int a, b, n = 53; /* n son 52 letras alfabeto + 1*/
	char cod[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cod_eq[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < n; b++)
		{
		if (s[a] == cod[b])
		{
			s[a] = cod_eq[b];
			break;
		}
		}
	}
		return (s);
}
