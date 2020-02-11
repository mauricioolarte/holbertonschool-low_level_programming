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

	last_digit = n % 10;
	_putchar(last_digit);
	return (last_digit);
}
