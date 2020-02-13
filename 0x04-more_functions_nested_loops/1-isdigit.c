#include "holberton.h"
/**
 *_isdigit - this function ckeck if the character is digit.
 *
 *@c: is a character.
 *
 *Return: 0 is no is digit, 1 is digit.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
