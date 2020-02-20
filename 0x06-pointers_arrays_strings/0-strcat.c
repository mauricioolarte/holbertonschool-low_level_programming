#include "holberton.h"
/**
 **_strcat - is function thar add array to other.
 *@dest: array destiny
 *@src: arra origin.
 *Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (b =0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
