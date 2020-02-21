#include "holberton.h"
/**
 **_strncpy - is function thar add array to other.
 *@dest: array destiny
 *@src: arra origin.
 *@n: integer.
 *Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cont = 0;

	while (cont < n && src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}

	return (dest);
}
