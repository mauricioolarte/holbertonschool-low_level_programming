#include "holberton.h"
#include <stdio.h>
/**
*_strpbrk - gets the length of a prefix substring.
*@s: is a string.
*@accept: is a string.
*Return: int
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
