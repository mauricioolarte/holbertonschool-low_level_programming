BB#include "holberton.h"
/**
 *print_number - print a number whit _putchar.
 *
 *@n: is a integer.
 *
 */
void print_number(int n)
{
	int m, p = 0, k, j = -2147483648;

	if (n == -2147483648)
	{
		m /= 10;
		p = 1;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	m = n;
	while (m != 0)
	{
		k = 1;
		while (m / 10)
		{
			k *= 10;
			m = m / 10;
		}
		_putchar (m);
		m = n;
		m %= k;
	}
	if (p == 1)
		_putchar('8');
	if (n == 0)
		_putchar('0');
}
