#include "holberton.h"
/**
 *times_table - print tables.
 *
 *Return: always 0.
 *
 */
void print_times_table(int n)
{
	int a, b, d, u, i, c;

	if (!(n > 15 || n < 0))
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			i = a * b;
			c = i / 100;
			d = (i - 100 * c) / 10;
			u = i % 10;
			if (b == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else if (i >= 0 && i <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(u + '0');
				if (b != n)
				{
				_putchar(',');
				}
			}
			else if (i > 9 && i <= 99)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(u + '0');
				if (b != n)
				{
					_putchar(',');
				}
			}
			else if (i > 99 && i <= 999)
			{
                                _putchar(' ');
                                _putchar(c + '0');
                                _putchar(d + '0');
                                _putchar(u + '0');
                                if (b != n)
                                {
                                        _putchar(',');
                                }
		}
		}
		_putchar('\n');
	}
	}
}
