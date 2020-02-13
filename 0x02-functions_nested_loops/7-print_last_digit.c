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
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar(ld + '0');

	return (ld);
}
