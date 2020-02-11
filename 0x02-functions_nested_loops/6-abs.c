#include "holberton.h"
/**
 *_abs - this function calculate the absolute valor of a number.
 *
 * @n: is a integer.
 *
 * Return: absolute valor of a number.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		n = n * (-1);
		return (n);
	}
}
