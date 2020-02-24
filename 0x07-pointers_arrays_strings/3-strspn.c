#include "holberton.h"
/**
*_strspn - gets the length of a prefix substring.
*@s: is a string.
*@accept: is a string.
*Return: int
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, coin = 0, k = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				coin ++;
				k++;
			}
			j++;
		}
		if (k == 0)
			break;
		i++;
		j = 0;
		k = 0;
	}
	return(coin);
}
