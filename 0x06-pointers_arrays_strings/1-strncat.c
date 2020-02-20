#include "holberton.h"
#include <stdio.h>
/**
 **_strncat - is function thar add array to other.
 *@dest: array destiny
 *@src: arra origin.
 *@n: integer.
 *Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
	}
	if (n > b)
		n = b;

	for (b = 0; b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
