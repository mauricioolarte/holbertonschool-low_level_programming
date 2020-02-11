#include "holberton.h"
/**
 * _islower - check if a character is a lowercase.
 * @c: parameter is a int that representa a lowercase.
 * Return: 0 is not lower and 1 is lower.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
