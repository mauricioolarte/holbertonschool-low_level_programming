#include "holberton.h"
#include <stdio.h>
/**
 **_strncat - is function thar add array to other.
 *@dest: array destiny
 *@src: arra origin.
 *@n: integer.
 *Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b, i;
/**
*	for (a = 0; dest[a] != '\0'; a++)
*	{
*	}
*/
	for (b = 0; src[b] != '\0'; b++)
	{
	}

	if (b > n)
	{
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	}
	else
	{
	for (i = 0; i < b; i++)
	{
		dest[i] = src[i];
	}
	for (i = b; b <= n; i++)
		dest[i] = '\0';
	}
	return (dest);
}
