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
	int last_digit;

	if (n < 0)
	{
	n = n * (-1);
	last_digit = n % 10;
	_putchar(last_digit + '0');
	}
	else
	{
		last_digit = n % 10;
		_putchar(last_digit + '0');
	}
	return (0);
}
