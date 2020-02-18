#include "holberton.h"
/**
*rev_string - retur the large of a string.
*@s: is a direction of a sting.
*
*/
void rev_string(char *s)
{
	int j = 0, i = 0, k = 0, temp[10];

	while (*(s + i) != '\0')
	{
		j++;
		i++;
	}

	for (i = j - 1; i >= 0; i--)
	{
		temp[k] = *(s + i);
		k++;
	}
	for (i = 0; i <= j - 1; i++)
	{
		*(s + i) = temp[i];
	}

}
