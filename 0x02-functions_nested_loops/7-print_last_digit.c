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
	int l;

	if (n < 0)
	{
	n = -n;
	}
	l = n % 10;
	_putchar(l + '0');

	return (l);
}
