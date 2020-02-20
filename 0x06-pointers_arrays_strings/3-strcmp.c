#include "holberton.h"
/**
*_strcmp - compare two string.
*@s1: string.
*@s2: string.
*Return: sum
*/
int _strcmp(char *s1, char *s2)
{
	int sum, j, i;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i; j++)
	{
		if (s1[j] == s2[j])
		{
			sum = 0;
		}
		else
		{
			sum = s1[j] - s2[j];
			break;
		}
	}
	return (sum);
}
