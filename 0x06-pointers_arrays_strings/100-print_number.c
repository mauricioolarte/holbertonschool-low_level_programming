BB#include "holberton.h"
/**
 *print_number - print a number whit _putchar.
 *
 *@n: is a integer.
 *
 */
void print_number(int n)
{
	int m, p = 0, k, j;

	j = n % 10;
	n /= 10;
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
	if (n == 0)
		_putchar('0');
	else
		_putchar(j + '0');
}
