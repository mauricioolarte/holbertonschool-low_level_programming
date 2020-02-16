#include "holberton.h"
/**
 *print_times_table - print tables.
 *Return: always 0.
 *@n: integer.
 */
void print_times_table(int n)
{
	int num, cen, a, b, d, u, c;

	if (!(n > 15 || n < 0))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				num = a * b, cen = num / 100;
				if (b == 0)
					_putchar('0');
				else
				{
				if (num < 10)
				u = num + '0', d = 32, c = 32;
				if (num >= 10 && num < 100)
				u = num % 10 + '0', d = num / 10 + '0', c = 32;
				if (num > 99)
				{
				u = num % 10 + '0', d = (num % 100) / 10 + '0';
				c = cen + '0';
				}
				_putchar(',');
				_putchar(' ');
				_putchar(c);
				_putchar(d);
				_putchar(u);
				}
		}
	_putchar('\n');
		}
	}
}
