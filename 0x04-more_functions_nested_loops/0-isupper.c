#include "holberton.h"
/**
 *_isupper - this function ckeck if the character is uppercase.
 *
 *@c: is a character.
 *
 *Return: 0 is no is uppercase, 1 is uppercase.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
