#include "holberton.h"
/**
 *print_last_digit - this function print the las digit of a number n.
 *
 *@n: is a integer.
 *
 *Return: last digit.
 */

int print_last_digit(int n)
{

	if (n < 0)
	{
	n = -n;
	}
	n = n % 10;
	_putchar(n + '0');
	}
	return (n);
}
