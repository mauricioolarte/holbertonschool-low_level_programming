#include "holberton.h"
/**
 * print_sign - take a number and check if is positive, zero or negative.
 *
 * @n: is a integer.
 * Return: - is negative, + is positive or zero if 0.
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
